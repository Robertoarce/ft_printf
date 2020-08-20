/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/08/19 19:42:53 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{
	int i =9;
	ft_printf("----------------------------------------------------------\n");
	ft_printf("--- CHARS ---\n");
	
	ft_printf("abcd %5c%3c", 'c', 'd');
	ft_printf("\n");
	   printf("abcd %5c%3c", 'c', 'd');
	ft_printf("\n");

	ft_printf("----------------------------------------------------------\n");
	ft_printf("--- STRING ---\n");

	ft_printf("char=|%*.*s|\n",9,3,"this.");
	   printf("char=|%*.*s|\n",9,3,"this.");
	ft_printf("\n-----------------------------\n");
	ft_printf("char=|%*.*s|\n",9,5,"this.");
	printf("char=|%*.*s|\n",9,5,"this.");
	ft_printf("\n-----------------------------\n");
	ft_printf("char=|%-*.*s|\n",9,3,"this.");
	printf("char=|%-*.*s|\n",9,3,"this.");
	ft_printf("\n-----------------------------\n");
	ft_printf("char=|%*.*s|\n",1,3,"this.");
	printf("char=|%*.*s|\n",1,3,"this.");
	ft_printf("\n-----------------------------\n");
	ft_printf("char=|%*.*s|\n",1,13,"this.");
	printf("char=|%*.*s|\n",1,13,"this.");
	ft_printf("\n-----------------------------\n");
	ft_printf("char=|%-*.*s|\n",1,3,"this.");
	printf("char=|%-*.*s|\n",1,3,"this.");
	
	ft_printf("\n-----------------------------\n");
	ft_printf("char=|%-*s|\n",7,NULL);
	   printf("char=|%-*s|\n",7,NULL);
	
	ft_printf("----------------------------------------------------------\n");
	ft_printf("--- POINTER  ---\n");
	i = 5;	
	printf("  print=|%-*p|\n",20,&i);
	ft_printf("ft_char=|%-*p|\n",20, &i);
	printf("  print=|%-*p|\n",20,&i);
	ft_printf("ft_char=|%-*p|\n",20, &i);
	
	ft_printf("----------------------------------------------------------\n");
	ft_printf("--- INTEGER  ---\n");
	   printf("char=|%*.*d|\n",3,1,-24984);
	ft_printf("char=|%*.*d|\n",3,1,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*d|\n",1,13,-24984);
	ft_printf("char=|%*.*d|\n",1,13,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*d|\n",3,1,24984);
	ft_printf("char=|%-*.*d|\n",3,1,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*d|\n",13,1,24984);
	ft_printf("char=|%-*.*d|\n",13,1,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*d|\n",61,13,24984);
	ft_printf("char=|%-*.*d|\n",61,13,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*d|\n",61,13,-24984);
	ft_printf("char=|%-*.*d|\n",61,13,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*d|\n",61,1,468);
	ft_printf("char=|%*.*d|\n",61,1,468);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*d|\n",61,10,468);
	ft_printf("char=|%*.*d|\n",61,10,468);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*d|\n",61,10,-468);
	ft_printf("char=|%*.*d|\n",61,10,-468);

	ft_printf("----------------------------------------------------------\n");
	ft_printf("--- UNSIGNED INTEGER  ---\n");
	   printf("char=|%*.*u|\n",3,1,0);
	ft_printf("char=|%*.*u|\n",3,1,0);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*ld|\n",1,13,4294967295);
	ft_printf("char=|%*.*u|\n",1,13,4294967295);

	ft_printf("----------------------------------------------------------\n");
	ft_printf("--- HEXA MINUS   ---\n");
	   printf("char=|%*.*x|\n",3,1,-24984);
	ft_printf("char=|%*.*x|\n",3,1,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*x|\n",1,13,-24984);
	ft_printf("char=|%*.*x|\n",1,13,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*x|\n",3,1,24984);
	ft_printf("char=|%-*.*x|\n",3,1,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*x|\n",13,1,24984);
	ft_printf("char=|%-*.*x|\n",13,1,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*x|\n",61,13,24984);
	ft_printf("char=|%-*.*x|\n",61,13,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*x|\n",61,13,-24984);
	ft_printf("char=|%-*.*x|\n",61,13,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*x|\n",61,1,468);
	ft_printf("char=|%*.*x|\n",61,1,468);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*x|\n",61,10,468);
	ft_printf("char=|%*.*x|\n",61,10,468);
	ft_printf("\n-----------------------------\n");
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*X|\n",13,1,24984);
	ft_printf("char=|%-*.*X|\n",13,1,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*X|\n",61,13,24984);
	ft_printf("char=|%-*.*X|\n",61,13,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*X|\n",61,13,-24984);
	ft_printf("char=|%-*.*X|\n",61,13,-24984);



	return(0);
}
