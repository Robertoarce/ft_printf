/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:53:29 by titorium          #+#    #+#             */
/*   Updated: 2020/09/09 15:30:19 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	ft_w(char *tab, int word_len, t_flags flag)
{

	(void)flag;

/*	printf("\ntab =>>%s\n",tab);
	printf("\nw_len =>>%d\n",word_len);
	printf("\nf.precision =>>%d\n",flag.precision);
	printf("\nf.point n=>>%d\n",flag.point);

*/
/*		if (tab == NULL)
	{
		ptr = ft_strnewstr("(null)");
		if (flag.point == 1 && flag.precision > 5)
		{
			ft_putstr(ptr);
			return (6);
		}
		if (flag.point == 1 && flag.precision < 6)
			return (0);
	}*/
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
