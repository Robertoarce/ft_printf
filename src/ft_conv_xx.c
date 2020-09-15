/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_xx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 18:26:02 by titorium          #+#    #+#             */
/*   Updated: 2020/09/15 12:06:42 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

char		ft_hexa2(int num)
{
	char *hexa;

	hexa = "0123456789ABCDEF";
	return (hexa[num]);
}

char		*ft_to_bhexa(unsigned long num)
{
	long long	remainder;
	char		*ptr;
	int			counter;

	counter = 0;
	remainder = num;
	while (remainder > 0 && counter++ > -1)
		remainder = remainder / 16;
	ptr = ft_strnew(counter + 1);
	ptr[0] = '0';
	while (num > 0 && counter > -1)
	{
		remainder = num / 16;
		ptr[counter - 1] = ft_hexa2(num % 16);
		num = remainder;
		counter--;
	}
	return (ptr);
}

int			ft_neg3(va_list lst, int *negative, char **tab, int *word_len)
{
	long long	spaces;

	spaces = va_arg(lst, unsigned int);
	if (spaces < 0)
	{
		*negative = 1;
		spaces = spaces * -1;
	}
	free(*tab);
	*tab = ft_to_bhexa(spaces);
	*word_len = 0;
	if (*tab)
		*word_len = ft_strlen(*tab);
	spaces = 0;
	return (spaces);
}

static int	fter2(t_flags f, char **tab, int neg, int wlen)
{
	int spaces;

	spaces = wlen;
	spaces = neg;
	spaces = f.width - wlen - neg;
	if ((*tab)[0] == '0' && (*tab)[1] == '\0'
			&& f.precision == 0 && f.point == 1)
	{
		spaces = f.width - neg;
		free(*tab);
		return (1 + ft_s(spaces));
	}
	spaces = -1;
	return (spaces);
}

int			ft_xx_conv(t_flags flag, va_list lst, int neg, int zeros)
{
	long long	spaces;
	char		*tab;
	int			word_len;
	int			counter;

	tab = ft_initialize(&counter, &word_len);
	spaces = ft_neg3(lst, &neg, &tab, &word_len);
	if (flag.width > word_len && flag.point == 0 && flag.zero == 1)
		zeros = flag.width - word_len - neg;
	if (flag.point == 1 && flag.precision > word_len)
		zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros - neg;
	if ((counter = fter2(flag, &tab, neg, word_len)) > -1)
		return (counter);
	if (flag.negative == 1)
		counter = ftp(neg, zeros) + ft_w(tab, word_len, flag) + ft_s(spaces);
	else
		counter = ftp2(spaces, neg, zeros) + ft_w(tab, word_len, flag);
	while ((int)spaces > counter++)
		ft_putchar('0');
	free(tab);
	return (counter);
}
