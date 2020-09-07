/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:25:29 by titorium          #+#    #+#             */
/*   Updated: 2020/09/07 17:25:47 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

char	ft_hexa(int num)
{
	char *hexa;

	hexa = "0123456789abcdef";
	return (hexa[num]);
}

static char *ft_nil()
{
	char *ptr;

	ptr = ft_strnew(4);
	ptr[0]='(';
	ptr[1]='n';
	ptr[2]='i';
	ptr[3]='l';
	ptr[4]=')';
	return (ptr);
}

char	*ft_to_pointer(unsigned long num, int base)
{
	unsigned long long	remainder;
	char				*ptr;
	int					counter;

	counter = 0;
	remainder = num;
	
	if (num == 0)
		return (ft_nil());

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

int		ft_p_conv(t_flags flag, va_list lst)
{
	unsigned long	ptr;
	char			*tab;
	int				counter;
	int				word_len;
	int				spaces;

	counter = 0;
	ptr = va_arg(lst, unsigned long long);
	tab = ft_to_pointer(ptr, 16);
	word_len = ft_strlen(tab);
	if (flag.precision < word_len && flag.point == 1)
		word_len = flag.precision;
	spaces = 0;
	if (flag.width > word_len)
		spaces = flag.width - word_len;
	if (flag.negative == 1)
		counter = ft_w(tab, word_len, flag) + ft_s(spaces);
	else
		counter = ft_s(spaces) + ft_w(tab, word_len, flag);
	free(tab);
	while (spaces > counter++)
		ft_putchar(' ');
	return (counter);
}
