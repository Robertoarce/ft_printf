/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/09/12 17:49:22 by rarce            ###   ########.fr       */
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
/*
a =ft_printf("-->|%-4.*%|<--\n",-4); //T2
ft_printf("\nmine=%d\n", a);

b =printf("-->|%-4.*%|<--\n",-4); //T2
printf("\nmine=%d\n", b);
*/

a =ft_printf("-->|%-4.4%|<--\n"); //T2
ft_printf("\nmine=%d\n", a);

b =printf("-->|%-4.4%|<--\n"); //T2
printf("\nmine=%d\n", b);

/*
a =ft_printf("-->|%-1.%|<--\n"); //T2
printf("\nmine=%d\n", a);

a =ft_printf("-->|%-.%|<--\n"); //T2
printf("\nmine=%d\n", a);
printf("\n--0--\n");








b =printf("-->|%4.%|<--\n"); //13  ... |_ _ _|
printf("\nreal=%d\n", b);

b =printf("-->|%3.%|<--\n"); //13  ... |_ _ _|
printf("\nreal=%d\n", b);

b =printf("-->|%2.%|<--\n"); //13  ... |_ _ _|
printf("\nreal=%d\n", b);

b =printf("-->|%1.%|<--\n"); //13  ... |_ _ _|
printf("\nreal=%d\n", b);

b =printf("-->|%0.%|<--\n"); //13  ... |_ _ _|
printf("\nreal=%d\n", b);

b =printf("-->|%-1.%|<--\n"); //13  ... |_ _ _|
printf("\nreal=%d\n", b);

b =printf("-->|%-2.%|<--\n"); //11  |_ _|
printf("\nreal=%d\n", b);

b =printf("-->|%-3.%|<--\n"); //11  |_ _|
printf("\nreal=%d\n", b);

b =printf("-->|%-4.%|<--\n"); //11  |_ _|
printf("\nreal=%d\n", b);

printf("\n--1--\n");

b =printf("-->|%-1.%|<--\n"); //10 |%a|
printf("\nreal=%d\n", b);

printf("\n--2--\n");

b =printf("-->|%.%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);


b =printf("-->|%-.4%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);


b =printf("-->|%-.3%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);

printf("\n--3--\n");

b =printf("-->|%-.2%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);

b =printf("-->|%-.1%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);

b =printf("-->|%-.%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);


printf("\n--4--\n");


b =printf("-->|%.1%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);

b =printf("-->|%.2%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);

b =printf("-->|%.3%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);


b =printf("-->|%.4%|<--\n"); //10 |%|
printf("\nreal=%d\n", b);





*/

return (0);
}
