/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_un.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:44:52 by titorium          #+#    #+#             */
/*   Updated: 2020/08/24 20:02:35 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	ft_u_conv(t_flags flag, va_list lst)
{
	int		counter;
	int		spaces;
	int		word_len;
	int		zeros;
	char	*tab;

	zeros = 0;
	spaces = va_arg(lst, int64_t);
	tab = ft_uitoa(spaces);
	word_len = ft_strlen(tab);
	spaces = 0;
	if (flag.precision > word_len && flag.point == 1)
		zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros;
	if (flag.negative == 1)
		counter = ft_z(zeros) + ft_w(tab, word_len, flag) + ft_s(spaces);
	else
		counter = ft_s(spaces) + ft_z(zeros) + ft_w(tab, word_len, flag);
	while (spaces > counter++)
		ft_putchar('0');
	free(tab);
	return (counter);
}
