/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:25:29 by titorium          #+#    #+#             */
/*   Updated: 2020/08/20 15:27:46 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_hexa(int num)
{
	char *hexa;

	hexa = "0123456789abcdef";
	return (hexa[num]);
}

char	*ft_to_pointer(unsigned long num, int base)
{
	unsigned long long	remainder;
	char				*ptr;
	int					counter;

	counter = 0;
	remainder = num;
	while (remainder > 0 && counter++ > -1)
		remainder = remainder / base;
	if (!(ptr = (char *)malloc(sizeof(char) * (counter + 1 + 2))))
		return ("error");
	ptr[counter + 1 + 2] = '\0';
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
