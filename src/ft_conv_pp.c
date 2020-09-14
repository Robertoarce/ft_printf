/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_pp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 17:57:25 by titorium          #+#    #+#             */
/*   Updated: 2020/09/14 19:39:40 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

static int	ft_putpp(void)
{
	ft_putchar('%');
	return (1);
}

int			ft_pp_conv(t_flags flag, int zeros)
{
	int	counter;
	int	spaces;
	int	word_len;

	counter = 0;
	word_len = 1;
	spaces = 0;
	if (flag.width > word_len && flag.zero == 1)
		zeros = flag.width - word_len;
	if (flag.width > word_len)
		spaces = flag.width - word_len - zeros;
	if (flag.negative == 1)
		counter = ft_z(zeros) + ft_putpp() + ft_s(spaces);
	else
		counter = ft_s(spaces) + ft_z(zeros) + ft_putpp();
	while (spaces > counter++)
		ft_putchar(' ');
	return (counter);
}
