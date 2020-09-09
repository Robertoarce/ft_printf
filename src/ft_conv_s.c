/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:42:06 by titorium          #+#    #+#             */
/*   Updated: 2020/09/09 12:14:19 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	ft_s_conv(t_flags flag, va_list lst)
{
	int		counter;
	int		spaces;
	int		word_len;
	char	*tab;

	counter = 0;
	tab = va_arg(lst, char*);
	word_len = 6;
	if (tab == NULL)
		tab = "(null)";
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
	while (spaces > counter++)
		ft_putchar(' ');
	return (counter);
}
