/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/09/07 18:29:12 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{
//	printf("specifier:\t|%%04.*d| %d %d\n", -2, 198);
//	printf("printf:\t\t|");

//	printf("|\t%d\n", real);
int c =120;
int d = 18;
int a=0;
int b=0;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;

	ft_printf("mine\n|");
c=	 ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i);
	 ft_printf("|a=%d", c);

	ft_printf("\n");
	ft_printf("real\n|");
d=	printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i);
 	printf("|b=%d", d);

/*
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
