/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/09/08 13:59:07 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{
//	printf("specifier:\t|%%04.*d| %d %d\n", -2, 198);
//	printf("printf:\t\t|");

//	printf("|\t%d\n", real);
//int c =120;
int d = 18;
int a=0;
//int b=0;
//	int		i = 8;
//	int		j = -12;
//	int		k = 123456789;
//	int		l = 0;
/*
	ft_printf("mine\n|");
c=	 ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i);
	 ft_printf("|a=%d", c);

	ft_printf("\n");
	ft_printf("real\n|");
d=	printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i);
 	printf("|b=%d", d);

*/
	ft_printf("\n");
	ft_printf("ft_print\n|");
a=	ft_printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	ft_printf("|a=%d", a);
a=0;
d=0;
	ft_printf("\n");
	ft_printf("real\n|");
d=	printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("|b=%d", d);

/*
a=	printf("1)-8s=%-8s|",NULL);
printf("\n|a=%d\n", a);

a=	printf("1)8s=%8s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("1)2s=%2s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("1)-2s=%-2s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("2).s= %.s|", NULL);
printf("\n|a=%d\n", a);
a=	printf("3)-4s=%-4s|", NULL);
printf("\n|a=%d\n", a);
a=	printf("4)-2.4s=%-2.4s|", NULL);
printf("\n|a=%d\n", a);
a=	printf("5)-8.12s=%-8.12s|", NULL);
printf("\n|a=%d\n", a);
a=	printf("6)3s=%3s|", NULL);
printf("\n|a=%d\n", a);
a=	printf("7)8s=%8s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("8)----12s=%----12s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("8)---12s=%---12s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("9).*s-2=%.*s|", -2, NULL);
printf("\n|a=%d\n", a);
a=	printf("9).*s18=%.*s|", 18, NULL);
printf("\n|a=%d\n", a);
a=	printf("9).*s-18=%.*s|", -18, NULL);
printf("\n|a=%d\n", a);
a=	printf("10).0s=%.0s|", NULL);
printf("\n|a=%d\n", a);
a=	printf("11).1s=%.1s|",  NULL);
printf("\n|a=%d\n", a);
a=	printf("12)%.2s=.2s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("13).4s=%.4s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("13).5s=%.5s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("13).6s=%.6s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("13).7s=%.7s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("14).8s=%.8s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("15).9s=%.9s|",NULL);
printf("\n|a=%d\n", a);


	
		ft_printf("\n---------------\n");
		ft_printf("\n---------------\n");
		ft_printf("\n---------------\n");
		ft_printf("\n---------------\n");
		ft_printf("\n---------------\n");

		ft_printf("mine\n");
	 ft_printf("|%1.d|", 1);

	ft_printf("\n");
	ft_printf("real\n");
 		printf("|%1.d|", 1);
*/
		
/*	int a = -4;
	int b = -4;
	while (a<9)
	{
		while (b<9)
		{
			printf("\n a =%d, b= %d ",a,b);
			printf("%0*.*d",a, b, 198);

			b++;
		}
		a++;
		b=-4;
	}
*/	return(0);
}
