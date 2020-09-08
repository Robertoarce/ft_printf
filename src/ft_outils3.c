/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 09:36:42 by titorium          #+#    #+#             */
/*   Updated: 2020/09/08 19:00:56 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

char	*ft_strnewstr(char *tab)
{
	char *ptr;
	int counter;
	
	ptr = ft_strnew(ft_strlen(tab));
	counter = 0;
	while (tab[counter] && tab)
	{
		ptr[counter] = tab[counter];
		counter++;
	}
	ptr[counter] ='\0';
	return (ptr);
}
