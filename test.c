/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/08/26 18:16:05 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{

	int a =0;

	printf("char=|%-*.*%|\n",61,13);
	printf("char=|%*.*%|\n",61,13);
	printf("char=|%-*%|\n",61);
	printf("char=|%-4.*%|\n",13);
	printf("char=|%4.*%|\n",13);
	printf("char=|%%|\n");

	a = printf("char=|%-*.*%|\n",61,13);
	printf("%d\n",a);
a=	printf("char=|%*.*%|\n",61,13);
	printf("%d\n",a);
a=	printf("char=|%-*%|\n",61);
	printf("%d\n",a);
a=	printf("char=|%-4.*%|\n",13);
	printf("%d\n",a);
a=	printf("char=|%4.*%|\n",13);
	printf("%d\n",a);
a=	printf("char=|%%|");
	printf("%d\n",a);
	return(0);
}
