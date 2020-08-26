/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:57:35 by titorium          #+#    #+#             */
/*   Updated: 2020/08/26 17:14:39 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	ft_negative(int *negative, va_list lst, char **tab, int *word_len)
{
	int spaces;

	spaces = va_arg(lst, int);
	if (spaces < 0)
	{
		*negative = 1;
		spaces = spaces * -1;
	}
	free(*tab);
	*tab = ft_itoa(spaces);
	*word_len = 0;
	if (*tab)
		*word_len = ft_strlen(*tab);
	return (0);
}

int	ft_d_conv(t_flags flag, va_list lst, int negative, int zeros)
{
	int		counter;
	int		spaces;
	int		word_len;
	char	*tab;

	tab = ft_strnew(1);
	spaces = ft_negative(&negative, lst, &tab, &word_len);
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
	while (spaces > counter++)
		ft_putchar('0');
	free(tab);
	return (counter);
}
