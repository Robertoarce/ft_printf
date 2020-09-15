/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:25:29 by titorium          #+#    #+#             */
/*   Updated: 2020/09/15 12:04:01 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

char		ft_hexa(int num)
{
	char *hexa;

	hexa = "0123456789abcdef";
	return (hexa[num]);
}

static char	*ft_nil(t_flags f)
{
	char *ptr;

	if (f.point == 1)
	{
		ptr = ft_strnew(2);
		ptr[0] = '0';
		ptr[1] = 'x';
		return (ptr);
	}
	ptr = ft_strnew(3);
	ptr[0] = '0';
	ptr[1] = 'x';
	ptr[2] = '0';
	return (ptr);
}

char		*ft_to_pointer(unsigned long num, int base, t_flags f, int *c)
{
	unsigned long long	remainder;
	char				*ptr;
	int					counter;

	*c = 0;
	counter = 0;
	remainder = num;
	if (num == 0)
		return (ft_nil(f));
	while (remainder > 0 && counter++ > -1)
		remainder = remainder / base;
	ptr = ft_strnew(counter + 1 + 2);
	while (num > 0 && counter > -1)
	{
		remainder = num / base;
		ptr[2 + counter - 1] = ft_hexa(num % base);
		num = remainder;
		counter--;
	}
	ptr[0] = '0';
	ptr[1] = 'x';
	return (ptr);
}

static int	fterp(t_flags f, char **tab, int z, int wlen)
{
	int spaces;

	spaces = wlen;
	spaces = z;
	spaces = f.width - wlen;
	if ((*tab)[0] == '0' && (*tab)[1] == '\0'
			&& f.precision == 0 && f.point == 1)
	{
		spaces = f.width;
		free(*tab);
		return (1 + ft_s(spaces));
	}
	spaces = -1;
	return (spaces);
}

int			ft_p_conv(t_flags flag, va_list lst, int zeros)
{
	unsigned long	ptr;
	char			*tab;
	int				counter;
	int				word_len;
	int				spaces;

	ptr = va_arg(lst, unsigned long long);
	tab = ft_to_pointer(ptr, 16, flag, &counter);
	word_len = ft_strlen(tab);
	if (flag.width > word_len && flag.point == 0 && flag.zero == 1)
		zeros = flag.width - word_len;
	if (flag.point == 1 && flag.precision > word_len)
		zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros;
	if ((counter = fterp(flag, &tab, zeros, word_len)) > -1)
		return (counter);
	if (flag.negative == 1)
		counter = ftp(0, zeros) + ft_w(tab, word_len, flag) + ft_s(spaces);
	else
		counter = ftp2(spaces, 0, zeros) + ft_w(tab, word_len, flag);
	while ((int)spaces > counter++)
		ft_putchar('0');
	free(tab);
	return (counter);
}
