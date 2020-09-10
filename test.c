/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/09/10 11:15:09 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{

	int		a = -4;
	int		b = 0;
	char	c = 'a';
//	int		d = 2147483647;
//	int		e = -2147483648;
//	int		f = 42;
//	int		g = 25;
//	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;

	char	*n = "abcdefghijklmnop";

//a =ft_printf(" %u, %x, %X", j, j, j); //T2
//ft_printf("\nmine=%d\n", a);

//b =printf(" %u, %x, %X", j, j, j); //T2
//printf("\nreal=%d\n", b);

a =ft_printf("%5%"); //T2
printf("\nmine=%d\n", a);
printf("\n----\n");

b = printf("%5%"); //T2
printf("\nreal=%d\n", b);
/*
a =ft_printf(" %s, %c, %d, %u, %x, %X,%s",  n, c, c, j, j, j,"a"); //T2
printf("\nmine=%d\n", a);
printf("\n----\n");

b= printf(" %s, %c, %d, %u, %x, %X,%s", n, c, c, j, j, j,"a"); //T2
printf("\nreal=%d\n", b);
*/
/*

ft_printf("\n--------\n");
a=ft_printf("|hello, %s.|", "gavin");
ft_printf("\nmine=%d\n", a);
ft_printf("\n--------\n");

ft_printf("\n--------\n");
b=printf("|hello, %s.|", "gavin");
printf("\nmine=%d\n", b);
printf("\n--------\n");
*/
return (0);
}
