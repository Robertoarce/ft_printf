/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:53:21 by titorium          #+#    #+#             */
/*   Updated: 2020/09/15 11:48:09 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int		ft_isin(const char *tab, char c)
{
	int counter;

	counter = 0;
	while (tab[counter] != '\0' && tab[counter])
	{
		if (tab[counter] == c)
			return (counter);
		counter++;
	}
	return (-1);
}

int		ft_spec_pos(const char *tab)
{
	int counter;

	counter = 0;
	while (tab[counter] != '\0' && tab[counter])
	{
		if (tab[counter] == 'c'
				|| tab[counter] == 's' || tab[counter] == 'p'
				|| tab[counter] == 'd' || tab[counter] == 'i'
				|| tab[counter] == 'u' || tab[counter] == 'x'
				|| tab[counter] == 'X' || tab[counter] == '%')
			return (counter);
		counter++;
	}
	return (-1);
}

void	ft_print_repeat(char c, int size)
{
	while (size--)
		ft_putchar(c);
}

int		ft_s(int num)
{
	int counter;

	counter = 0;
	while (counter++ < num)
		ft_putchar(' ');
	return (num);
}

int		ft_z(int num)
{
	int counter;

	counter = 0;
	while (counter++ < num)
		ft_putchar('0');
	return (num);
}
