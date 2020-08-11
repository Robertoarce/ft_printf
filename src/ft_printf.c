/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:16:50 by rarce             #+#    #+#             */
/*   Updated: 2020/08/11 12:26:16 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../libft/ft_putchar.c"
#include "../libft/ft_putstr.c"
#include "../libft/ft_putstrn.c"
#include "../libft/ft_findc.c"
#include "../libft/ft_substr.c"
#include "../libft/ft_atoi.c"
#include "../libft/ft_strlen.c"
#include "ft_outils.c"
#include <stdarg.h>
#include <stdio.h>

int ft_print_c(const char *chain, va_list lst, int end)
{
	int counter;
	//int lenght;

	(void)lst;

	counter = 0;
	while (counter < end)
	{
		ft_putchar(chain[counter]);
		counter++;
	}

	return(counter);

}

/*----------------------------------------------------------------------*/
/*			 			1) get parameters								*/
/*----------------------------------------------------------------------*/

int ft_specific(va_list lst, const char *chain, int *error, int print_count)
{	
	flags	flag;
	int		error_count;
	
	(void)lst;
	ft_flags_init(&flag);
	
	if (chain[0] == '%')
	{
		ft_putchar('%');
		print_count++;
		return (1);
	}
	ft_get_specifiers(&flag, chain, lst);


/*----------------------------------------------------------------------*/
/*			 			2) error checking in parameters					*/
/*----------------------------------------------------------------------*/
	error_count = -1;
	error_count = ft_error_check(flag, chain);
	if (error_count > -1)
	{
		*error = -1;
		ft_putstrn((char*)chain,error_count);

		return (error_count);
	}
/*----------------------------------------------------------------------*/
/*			 			3) use parameters, get args  and print						*/
/*----------------------------------------------------------------------*/
	return (ft_get_args(flag, lst));


/*-------------------------------------------------------------------*/
/*-------------------------------------------------------------------*/
/*-------------------------------------------------------------------*/

int ft_printf(const char *chain, ...)
{
	int print_count;
	int i;
	va_list lst;
	int error;

	
	i = 0;
	error = 0;
	print_count = 0;

	va_start(lst, chain);

	while (chain[i] != '\0' && chain[i])
	{
		if (chain [i] == '%')
		{
			print_count = ft_specific(lst, &chain[i + 1] , &error, print_count); //print it and gives back the printed amount
			if (error == -1)
				return (print_count);
			i =  i + ft_spec_pos(&chain[i]) + 1;
		}
		else
		{
		ft_putchar(chain[i]);
		print_count++;
		i++;
		}
	}
	
	va_end(lst);
	return(print_count);
}



/************************************************************/
/************************************************************/
/******************* 				*************************/
/*******************	TEST ZONE	*************************/
/******************* 				*************************/
/************************************************************/
/************************************************************/

int  main()
{
	int i =0;

#include <stdio.h>

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
	   printf("char=|%*.*x|\n",61,10,-468);
	ft_printf("char=|%*.*x|\n",61,10,-468);

	ft_printf("----------------------------------------------------------\n");
	ft_printf("--- HEXA MAYUS   ---\n");
	   printf("char=|%*.*X|\n",3,1,-24984);
	ft_printf("char=|%*.*X|\n",3,1,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*X|\n",1,13,-24984);
	ft_printf("char=|%*.*X|\n",1,13,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*X|\n",3,1,24984);
	ft_printf("char=|%-*.*X|\n",3,1,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*X|\n",13,1,24984);
	ft_printf("char=|%-*.*X|\n",13,1,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*X|\n",61,13,24984);
	ft_printf("char=|%-*.*X|\n",61,13,24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%-*.*X|\n",61,13,-24984);
	ft_printf("char=|%-*.*X|\n",61,13,-24984);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*X|\n",61,1,468);
	ft_printf("char=|%*.*X|\n",61,1,468);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*X|\n",61,10,468);
	ft_printf("char=|%*.*X|\n",61,10,468);
	ft_printf("\n-----------------------------\n");
	   printf("char=|%*.*X|\n",61,10,-468);
	ft_printf("char=|%*.*X|\n",61,10,-468);





	return (i);


}

