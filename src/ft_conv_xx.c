/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_xx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 18:26:02 by titorium          #+#    #+#             */
/*   Updated: 2020/08/26 14:35:06 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

char	ft_hexa2(int num)
{
	char *hexa;

	hexa = "0123456789ABCDEF";
	return (hexa[num]);
}

char	*ft_to_bhexa(unsigned long num)
{
	long long	remainder;
	char		*ptr;
	int			counter;

	counter = 0;
	remainder = num;
	while (remainder > 0 && counter++ > -1)
		remainder = remainder / 16;
	ptr = ft_strnew(counter + 1);
	while (num > 0 && counter > -1)
	{
		remainder = num / 16;
		ptr[counter - 1] = ft_hexa2(num % 16);
		num = remainder;
		counter--;
	}
	return (ptr);
}

int		ft_neg3(va_list lst, int *negative, char **tab, int *word_len)
{
	long long	spaces;

	spaces = va_arg(lst, unsigned long long);
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

int		ft_xx_conv(t_flags flag, va_list lst, int negative, int zeros)
{
	long long	spaces;
	char		*tab;
	int			word_len;
	int			counter;

	tab = ft_strnew(1);
	spaces = ft_neg3(lst, &negative, &tab, &word_len);
	if (flag.precision > word_len && flag.point == 1)
		zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros - negative;
	if (flag.negative == 1)
	{
		counter = ft_n(negative) + ft_z(zeros);
		counter = counter + ft_w(tab, word_len, flag) + ft_s(spaces);
	}
	else
	{
		counter = ft_s(spaces) + ft_n(negative);
		counter = counter + ft_z(zeros) + ft_w(tab, word_len, flag);
	}
	while ((int)spaces > counter++)
		ft_putchar('0');
	free(tab);
	return (counter);
}
