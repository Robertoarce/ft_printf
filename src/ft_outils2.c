/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:53:29 by titorium          #+#    #+#             */
/*   Updated: 2020/09/01 11:46:12 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

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

int	ftp(int neg, int z, char *tab, int w, t_flags f)
{
	int counter;

	counter = 0;
	counter = ft_n(neg) + ft_z(z);
	counter = counter + ft_w(tab, w, f);
	return (counter);
}

int	ftp2(int s, int  neg, int z)
{
	int counter;

	counter = 0;
	counter = ft_s(s) + ft_n(neg);
	counter = counter + ft_z(z);
	return (counter);
}
