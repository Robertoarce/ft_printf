/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_pp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 17:57:25 by titorium          #+#    #+#             */
/*   Updated: 2020/09/10 11:43:40 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

static int	ft_putpp()
{
	ft_putchar('%');
	return (1);
}


int	ft_pp_conv(t_flags flag)
{
	int		counter;
	int		spaces;
	int		word_len;

	counter = 0;
	word_len = 1;
	if (flag.precision < word_len && flag.point == 1)
		word_len = flag.precision;
	spaces = 0;
	if (flag.width > word_len)
		spaces = flag.width - word_len;
	if (flag.negative == 1)
		counter = ft_putpp()+ ft_s(spaces) + 1;
	else
		counter = ft_s(spaces) + ft_putpp() + 1;
	while (spaces > counter++)
		ft_putchar(' ');
	return (counter);
}
