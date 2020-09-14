/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_un.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:44:52 by titorium          #+#    #+#             */
/*   Updated: 2020/09/14 18:33:46 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

static int	fter2(t_flags f, char **tab, int z,  int wlen)
{
	int spaces;

	spaces = wlen;
	spaces = z;
	
	spaces = f.width - wlen ;

	if((*tab)[0]=='0'&& (*tab)[1] == '\0' &&  f.precision == 0 && f.point == 1)
	{
		spaces = f.width;

		free (*tab);
		return (1 + ft_s(spaces));
	}
	spaces = -1;
	return (spaces);
}

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

	if (flag.width > word_len && flag.point == 0 && flag.zero == 1)
		zeros = flag.width - word_len ;
	if (flag.point == 1  && flag.precision > word_len   )
		zeros = flag.precision - word_len ;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros;	
	if ((counter = fter2(flag, &tab, zeros,  word_len)) > -1)
		return (counter);
	if (flag.negative == 1)
		counter = ft_z(zeros) + ft_w(tab, word_len, flag) + ft_s(spaces);
	else 
		counter = ft_s(spaces) + ft_z(zeros) + ft_w(tab, word_len, flag);
	while (spaces > counter++)
		ft_putchar('0');
	free(tab);
	return (counter);
}
