/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 09:36:42 by titorium          #+#    #+#             */
/*   Updated: 2020/09/09 12:14:03 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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

static int ft_charin(char c)
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

void	ft_trim(const char **tab)
{
	int counter;

printf("\ntab=> %s\n",*tab);
	counter = 0;
	while (*tab[counter] != '\0')
	{
		if(ft_charin(*tab[counter]) == 1 )
			*tab[counter + 1] = '\0';
		counter++;
	}
}
