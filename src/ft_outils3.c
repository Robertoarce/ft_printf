/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 09:36:42 by titorium          #+#    #+#             */
/*   Updated: 2020/09/10 12:55:52 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

char	*ft_strnewn(const char *tab , int size )
{
	char *ptr;
	int counter;
	
	ptr = ft_strnew(ft_strlen(tab));
	counter = 0;

	while (tab[counter] && tab && size != 0)
	{
		ptr[counter] = tab[counter];
		counter++;
		size--;
	}
	ptr[counter] ='\0';
	return ((char*)ptr);
}

int ft_charin(char c)
{
	int counter;
	char *ptr;

	ptr = "cspdiuxX%";
	counter = 0;
	
	while (ptr[counter] != '\0')
	{
		if (c == ptr[counter])
			return (1);
		counter++;
	}
	return (0);
}

char	*ft_trim(const char *tab, int *button)
{
	int counter;

	counter = 0;
	while (tab[counter] != '\0')
	{
		if(ft_charin(tab[counter]) == 1 )
		{
			*button = 1;
			return(ft_strnewn(tab,counter + 1)) ;
		}
		counter++;
	}
	return ((char*)tab);
}
