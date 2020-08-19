/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:53:29 by titorium          #+#    #+#             */
/*   Updated: 2020/08/19 15:51:32 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	ft_w(char *tab, int word_len, t_flags flag)
{
	if (tab == NULL && flag.point == 0)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstrn(tab, word_len);
	return (word_len);
}

int	ft_n(int sign)
{
	if (sign == 0)
		return (0);
	ft_putchar('-');
	return (1);
}

int	ft_findc(const char *tab, char c)
{
	int counter;

	counter = 0;
	while (tab[counter] && tab[counter + 1] && tab && counter < 10000)
	{
		if (tab[counter] == c)
			return (counter);
		counter++;
	}
	return (-1);
}
