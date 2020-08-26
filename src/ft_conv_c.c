/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:35:59 by titorium          #+#    #+#             */
/*   Updated: 2020/08/24 20:01:50 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	ft_c_conv(t_flags flag, va_list lst)
{
	int		counter;
	int		spaces;
	int		word_len;
	int		tab;

	counter = 0;
	tab = va_arg(lst, int);
	word_len = 1;
	spaces = 0;
	if (flag.width > word_len)
		spaces = flag.width - word_len;
	if (flag.negative == 1)
	{
		ft_putchar(tab);
		counter = 1 + ft_s(spaces);
	}
	else
	{
		counter = 1 + ft_s(spaces);
		ft_putchar(tab);
	}
	while (spaces > counter++)
		ft_putchar(' ');
	return (counter);
}
