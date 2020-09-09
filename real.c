/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/09/08 15:17:02 by titorium         ###   ########.fr       */
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

	int a=0;


printf("\n **********   PRINT ********  \n");
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
a=	printf("13).*-12s=%.*s|",-12,NULL);
printf("\n|a=%d\n", a);
a=	printf("13).*-1s=%.*s|",-1,NULL);
printf("\n|a=%d\n", a);
a=	printf("13).0s=%.0s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("13).1s=%.1s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("13).2s=%.2s|",NULL);
printf("\n|a=%d\n", a);
a=	printf("13).3s=%.3s|",NULL);
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

return(0);
}
