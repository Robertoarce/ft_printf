/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 17:10:28 by titorium          #+#    #+#             */
/*   Updated: 2020/08/26 15:39:17 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int a;
	int b;

	

ft_printf("----------------------------------------------------------\n");
	ft_printf("--- CHARS ---\n");
	b = ft_printf("abcd %5c%3c", 'c', 'd');
	printf("-> %d\n", b);
	a = printf("abcd %5c%3c", 'c', 'd');
	printf("-> %d \n", a);
ft_printf("\n");	
	b = ft_printf("abcd %%%5c%3c", 'c', 'd');
	printf("-> %d\n", b);
	a = printf("abcd %%%5c%3c", 'c', 'd');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*c", 5, 'H');
	printf("-> %d\n", b);
	a = printf("%*c", 5, 'H');
	printf("-> %d \n", a);
ft_printf("\n");
/*
	b = ft_printf("%*c%c-%c", -10, 'c', 'r', 't');
	printf("-> %d\n", b);
	a = printf("%*c%c-%c", -10, 'c', 'r', 't');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%c", 'a');
	printf("-> %d\n", b);
	a = printf("%c", 'a');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1c", '-');
	printf("-> %d\n", b);
	a = printf("%1c", '-');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*c", 12, '0');
	printf("-> %d\n", b);
	a = printf("%*c", 12, '0');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*c", 12, '-');
	printf("-> %d\n", b);
	a = printf("%-*c", 12, '-');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*c", 12, '%');
	printf("-> %d\n", b);
	a = printf("%*c", 12, '%');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*c", 12, 'a');
	printf("-> %d\n", b);
	a = printf("%-*c", 12, 'a');
	printf("-> %d \n", a);
ft_printf("\n");
ft_printf("----------------------------------------------------------\n");
	ft_printf("--- CAS D'ERREURS ---\n");
	ft_printf("D: Doit afficher du vide -> '%.0d'\n", 0);
	printf("O: Doit afficher du vide -> '%.0d'\n", 0);
	ft_printf("D: Doit afficher du vide -> '%.d'\n", 0);
	printf("O: Doit afficher du vide -> '%.d'\n", 0);
	ft_printf("D: Doit afficher du vide -> '%.0u'\n", 0);
	printf("O: Doit afficher du vide -> '%.0u'\n", 0);
	ft_printf("D: Doit afficher du vide -> '%.u'\n", 0);
	printf("O: Doit afficher du vide -> '%.u'\n", 0);
	ft_printf("D: Doit afficher du vide -> '%.0x'\n", 0);
	printf("O: Doit afficher du vide -> '%.0x'\n", 0);
	ft_printf("D: Doit afficher du vide -> '%.x'\n", 0);
	printf("O: Doit afficher du vide -> '%.x'\n", 0);
	ft_printf("D: Doit afficher du vide -> '%.0s'\n", "");
	printf("O: Doit afficher du vide -> '%.0s'\n", "");
	ft_printf("D: Doit afficher du vide -> '%.s'\n", "");
	printf("O: Doit afficher du vide -> '%.s'\n", "");
	ft_printf("\n");
	
ft_printf("----------------------------------------------------------\n");
	ft_printf("--- DOUBLE POURCENT ---\n");
	b = ft_printf("%%");
	printf("-> %d\n", b);
	a = printf("%%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-020%");
	printf("-> %d\n", b);
	a = printf("%-020%");
	printf("-> %d \n", a);
ft_printf("\n");
*/
/*
b = ft_printf("a%%a", 25);
	printf("-> %d\n", b);
	a = printf("a%%a", 25);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%%-%%-%d%% %%", 5);
	printf("-> %d\n", b);
	a = printf("%%-%%-%d%% %%", 5);
	printf("-> %d \n", a);
ft_printf("\n");
ft_printf("----------------------------------------------------------\n");
	ft_printf("--- POINTEURS ---\n");
	b = ft_printf("%-22.5p", &a);
	printf("-> %d\n", b);
	a = printf("%-22.5p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%022.5p", &b);
	printf("-> %d\n", b);
	a = printf("%022.5p", &b);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%022p", &a);
	printf("-> %d\n", b);
	a = printf("%022p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%22p", &a);
	printf("-> %d\n", b);
	a = printf("%22p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-22p", &a);
	printf("-> %d\n", b);
	a = printf("%-22p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%5.30p", &a);
	printf("-> %d\n", b);
	a = printf("%5.30p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%23.22p", &a);
	printf("-> %d\n", b);
	a = printf("%23.22p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%5.3p", &a);
	printf("-> %d\n", b);
	a = printf("%5.3p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%23.3p", &a);
	printf("-> %d\n", b);
	a = printf("%23.3p", &a);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%p", 0);
	printf("-> %d\n", b);
	printf("0x0-> 3\n");
ft_printf("\n");
	b = ft_printf("%-*p", 10, (void *)209590960);
	printf("-> %d\n", b);
	a = printf("%-*p", 10, (void *)209590960);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*p", 10, (void *)209590960);
	printf("-> %d\n", b);
	a = printf("%-*p", 10, (void *)209590960);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*p", 11, (void *)209590960);
	printf("-> %d\n", b);
	a = printf("%-*p", 11, (void *)209590960);
	printf("-> %d \n", a);
ft_printf("\n");

ft_printf("----------------------------------------------------------\n");
	ft_printf("--- INTS ---\n");
	b = ft_printf("%i", 8);
	printf("-> %d\n", b);
	a = printf("%i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0012d", 5);
	printf("-> %d\n", b);
	a = printf("%0012d", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%d", -12);
	printf("-> %d\n", b);
	a = printf("%d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%d", 123456789);
	printf("-> %d\n", b);
	a = printf("%d", 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%d", 0);
	printf("-> %d\n", b);
	a = printf("%d", 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%d", -12345678);
	printf("-> %d\n", b);
	a = printf("%d", -12345678);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0i", 8);
	printf("-> %d\n", b);
	a = printf("%0i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0d", -12);
	printf("-> %d\n", b);
	a = printf("%0d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0d", 123456789);
	printf("-> %d\n", b);
	a = printf("%0d", 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0d", 0);
	printf("-> %d\n", b);
	a = printf("%0d", 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0d", -123456789);
	printf("-> %d\n", b);
	a = printf("%0d", -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1i", 8);
	printf("-> %d\n", b);
	a = printf("%1i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1d", -12);
	printf("-> %d\n", b);
	a = printf("%1d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1d", 123456789);
	printf("-> %d\n", b);
	a = printf("%1d", 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1d", 0);
	printf("-> %d\n", b);
	a = printf("%1d", 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1d", -123456789);
	printf("-> %d\n", b);
	a = printf("%1d", -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.i", 8);
	printf("-> %d\n", b);
	a = printf("%0.i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.d", -12);
	printf("-> %d\n", b);
	a = printf("%0.d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.d", 123456789);
	printf("-> %d\n", b);
	a = printf("%0.d", 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.d", 0);
	printf("-> %d\n", b);
	a = printf("%0.d", 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.d", -123456789);
	printf("-> %d\n", b);
	a = printf("%0.d", -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.0i", 8);
	printf("-> %d\n", b);
	a = printf("%.0i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.0d", -12);
	printf("-> %d\n", b);
	a = printf("%.0d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.0d", 123456789);
	printf("-> %d\n", b);
	a = printf("%.0d", 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.0d", 0);
	printf("-> %d\n", b);
	a = printf("%.0d", 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.0d", -123456789);
	printf("-> %d\n", b);
	a = printf("%.0d", -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.0i", 8);
	printf("-> %d\n", b);
	a = printf("%0.0i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.0d", -12);
	printf("-> %d\n", b);
	a = printf("%0.0d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.0d", 123456789);
	printf("-> %d\n", b);
	a = printf("%0.0d", 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.0d", 0);
	printf("-> %d\n", b);
	a = printf("%0.0d", 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0.0d", -123456789);
	printf("-> %d\n", b);
	a = printf("%0.0d", -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0i", 8);
	printf("-> %d\n", b);
	a = printf("%-0i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0i", -12);
	printf("-> %d\n", b);
	a = printf("%-0i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0i", 123456789);
	printf("-> %d\n", b);
	a = printf("%-0i", 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0i", 0);
	printf("-> %d\n", b);
	a = printf("%-0i", 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0i", -123456789);
	printf("-> %d\n", b);
	a = printf("%-0i", -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0-i", 8);
	printf("-> %d\n", b);
	a = printf("%0-i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0-d", -12);
	printf("-> %d\n", b);
	a = printf("%0-d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-.i", 8);
	printf("-> %d\n", b);
	a = printf("%-.i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-.d", -12);
	printf("-> %d\n", b);
	a = printf("%-.d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-.0i", 8);
	printf("-> %d\n", b);
	a = printf("%-.0i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-.0d", -12);
	printf("-> %d\n", b);
	a = printf("%-.0d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-i", 8);
	printf("-> %d\n", b);
	a = printf("%-i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-d", -12);
	printf("-> %d\n", b);
	a = printf("%-d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.i", 8);
	printf("-> %d\n", b);
	a = printf("%.i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.d", -12);
	printf("-> %d\n", b);
	a = printf("%.d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0.0i", 8);
	printf("-> %d\n", b);
	a = printf("%-0.0i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0.0d", -12);
	printf("-> %d\n", b);
	a = printf("%-0.0d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%00i", 8);
	printf("-> %d\n", b);
	a = printf("%00i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%00d", -12);
	printf("-> %d\n", b);
	a = printf("%00d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1.i", 8);
	printf("-> %d\n", b);
	a = printf("%1.i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1.d", -12);
	printf("-> %d\n", b);
	a = printf("%1.d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.1i", 8);
	printf("-> %d\n", b);
	a = printf("%.1i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.1d", -12);
	printf("-> %d\n", b);
	a = printf("%.1d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1.1i", 8);
	printf("-> %d\n", b);
	a = printf("%1.1i", 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1.1d", -12);
	printf("-> %d\n", b);
	a = printf("%1.1d", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-1i", -12);
	printf("-> %d\n", b);
	a = printf("%-1i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-01i", -12);
	printf("-> %d\n", b);
	a = printf("%-01i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-1.i", -12);
	printf("-> %d\n", b);
	a = printf("%-1.i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-.1i", -12);
	printf("-> %d\n", b);
	a = printf("%-.1i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-0.1i", -12);
	printf("-> %d\n", b);
	a = printf("%-0.1i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-1.0i", -12);
	printf("-> %d\n", b);
	a = printf("%-1.0i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-1.1i", -12);
	printf("-> %d\n", b);
	a = printf("%-1.1i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%1.0i", -12);
	printf("-> %d\n", b);
	a = printf("%1.0i", -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*i", -4, 8);
	printf("-> %d\n", b);
	a = printf("%*i", -4, 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*d", -4, -12);
	printf("-> %d\n", b);
	a = printf("%*d", -4, -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*i", -4, 123456789);
	printf("-> %d\n", b);
	a = printf("%*i", -4, 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*d", -4, 0);
	printf("-> %d\n", b);
	a = printf("%*d", -4, 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*i", -4, -123456789);
	printf("-> %d\n", b);
	a = printf("%*i", -4, -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*i", 4, 8);
	printf("-> %d\n", b);
	a = printf("%*i", 4, 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*d", 4, -12);
	printf("-> %d\n", b);
	a = printf("%*d", 4, -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*i", 4, 123456789);
	printf("-> %d\n", b);
	a = printf("%*i", 4, 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*d", 4, 0);
	printf("-> %d\n", b);
	a = printf("%*d", 4, 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%*i", 4, -123456789);
	printf("-> %d\n", b);
	a = printf("%*i", 4, -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*i", -4, 8);
	printf("-> %d\n", b);
	a = printf("%0*i", -4, 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", -4, -12);
	printf("-> %d\n", b);
	a = printf("%0*d", -4, -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", -4, 123456789);
	printf("-> %d\n", b);
	a = printf("%0*d", -4, 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", -4, 0);
	printf("-> %d\n", b);
	a = printf("%0*d", -4, 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", -4, -123456789);
	printf("-> %d\n", b);
	a = printf("%0*d", -4, -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*i", 4, 8);
	printf("-> %d\n", b);
	a = printf("%0*i", 4, 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", 4, -12);
	printf("-> %d\n", b);
	a = printf("%0*d", 4, -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", 4, 123456789);
	printf("-> %d\n", b);
	a = printf("%0*d", 4, 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", 4, 0);
	printf("-> %d\n", b);
	a = printf("%0*d", 4, 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%0*d", 4, -123456789);
	printf("-> %d\n", b);
	a = printf("%0*d", 4, -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", -4, 8);
	printf("-> %d\n", b);
	a = printf("%-*i", -4, 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", -4, -12);
	printf("-> %d\n", b);
	a = printf("%-*i", -4, -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", -4, 123456789);
	printf("-> %d\n", b);
	a = printf("%-*i", -4, 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", -4, 0);
	printf("-> %d\n", b);
	a = printf("%-*i", -4, 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", -4, -123456789);
	printf("-> %d\n", b);
	a = printf("%-*i", -4, -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", 4, 8);
	printf("-> %d\n", b);
	a = printf("%-*i", 4, 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", 4, -12);
	printf("-> %d\n", b);
	a = printf("%-*i", 4, -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", 4, 123456789);
	printf("-> %d\n", b);
	a = printf("%-*i", 4, 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", 4, 0);
	printf("-> %d\n", b);
	a = printf("%-*i", 4, 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%-*i", 4, -123456789);
	printf("-> %d\n", b);
	a = printf("%-*i", 4, -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.*i", -4, 8);
	printf("-> %d\n", b);
	a = printf("%.*i", -4, 8);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.*d", -4, -12);
	printf("-> %d\n", b);
	a = printf("%.*d", -4, -12);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.*d", -4, 123456789);
	printf("-> %d\n", b);
	a = printf("%.*d", -4, 123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.*d", -4, 0);
	printf("-> %d\n", b);
	a = printf("%.*d", -4, 0);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%.*d", -4, -123456789);
	printf("-> %d\n", b);
	a = printf("%.*d", -4, -123456789);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
ft_printf("----------------------------------------------------------\n");
	ft_printf("--- UNSIGNED INTS ---\n");
	b = ft_printf("%-12.5u", 5);
	printf("-> %d\n", b);
	a = printf("%-12.5u", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%012.5u", 5);
	printf("-> %d\n", b);
	a = printf("%012.5u", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%012u", 5);
	printf("-> %d\n", b);
	a = printf("%012u", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%12u", 5);
	printf("-> %d\n", b);
	a = printf("%12u", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-12u", 5);
	printf("-> %d\n", b);
	a = printf("%-12u", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%05.12u", 5);
	printf("-> %d\n", b);
	a = printf("%05.12u", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%13.12u", 5);
	printf("-> %d\n", b);
	a = printf("%13.12u", 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -10, 5);
	printf("-> %d\n", b);
	a = printf("%*u", -10, 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, 8);
	printf("-> %d\n", b);
	a = printf("%*u", -1, 8);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, -12);
	printf("-> %d\n", b);
	a = printf("%*u", -1, -12);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, 123456789);
	printf("-> %d\n", b);
	a = printf("%*u", -1, 123456789);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, 0);
	printf("-> %d\n", b);
	a = printf("%*u", -1, 0);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, -12345678);
	printf("-> %d\n", b);
	a = printf("%*u", -1, -12345678);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, 'a');
	printf("-> %d\n", b);
	a = printf("%*u", -1, 'a');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, 2147483647);
	printf("-> %d\n", b);
	a = printf("%*u", -1, 2147483647);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*u", -1, -2147483648);
	printf("-> %d\n", b);
	a = printf("%*u", -1, -2147483648);
	printf("-> %d \n", a);
ft_printf("\n");
ft_printf("----------------------------------------------------------\n");
	ft_printf("--- HEXA ---\n");
	b = ft_printf("%-12.5x", -125);
	printf("-> %d\n", b);
	a = printf("%-12.5x", -125);
	printf("-> %d \n", a);
	ft_printf("\n");
ft_printf("\n");
	b = ft_printf("%012.5x", -125);
	printf("-> %d\n", b);
	a = printf("%012.5x", -125);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%012x", -125);
	printf("-> %d\n", b);
	a = printf("%012x", -125);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%12x", -125);
	printf("-> %d\n", b);
	a = printf("%12x", -125);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-12x", -125);
	printf("-> %d\n", b);
	a = printf("%-12x", -125);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%05.12x", -125);
	printf("-> %d\n", b);
	a = printf("%05.12x", -125);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%13.12x", -125);
	printf("-> %d\n", b);
	a = printf("%13.12x", -125);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -10, 5);
	printf("-> %d\n", b);
	a = printf("%*x", -10, 5);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -1, 8);
	printf("-> %d\n", b);
	a = printf("%*x", -1, 8);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, 8);
	printf("-> %d\n", b);
	a = printf("%*X", -1, 8);
	printf("-> %d \n", a);
ft_printf("\n");
b = ft_printf("%*x", -1, -12);
	printf("-> %d\n", b);
	a = printf("%*x", -1, -12);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, -12);
	printf("-> %d\n", b);
	a = printf("%*X", -1, -12);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -1, 123456789);
	printf("-> %d\n", b);
	a = printf("%*x", -1, 123456789);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, 123456789);
	printf("-> %d\n", b);
	a = printf("%*X", -1, 123456789);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -1, 0);
	printf("-> %d\n", b);
	a = printf("%*x", -1, 0);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, 0);
	printf("-> %d\n", b);
	a = printf("%*X", -1, 0);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -1, -12345678);
	printf("-> %d\n", b);
	a = printf("%*x", -1, -12345678);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, -12345678);
	printf("-> %d\n", b);
	a = printf("%*X", -1, -12345678);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -1, 'a');
	printf("-> %d\n", b);
	a = printf("%*x", -1, 'a');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, 'a');
	printf("-> %d\n", b);
	a = printf("%*X", -1, 'a');
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -1, 2147483647);
	printf("-> %d\n", b);
	a = printf("%*x", -1, 2147483647);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, 2147483647);
	printf("-> %d\n", b);
	a = printf("%*X", -1, 2147483647);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*x", -1, -2147483648);
	printf("-> %d\n", b);
	a = printf("%*x", -1, -2147483648);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*X", -1, -2147483648);
	printf("-> %d\n", b);
	a = printf("%*X", -1, -2147483648);
	printf("-> %d \n", a);
ft_printf("\n");
ft_printf("----------------------------------------------------------\n");
	ft_printf("--- STRINGS ---\n");
	b = ft_printf("%1s", "abcdefghijklmnop");
	printf("-> %d\n", b);
	a = printf("%1s", "abcdefghijklmnop");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1s", "-a");
	printf("-> %d\n", b);
	a = printf("%1s", "-a");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1s", "-12");
	printf("-> %d\n", b);
	a = printf("%1s", "-12");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1s", "0");
	printf("-> %d\n", b);
	a = printf("%1s", "0");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1s", "%%");
	printf("-> %d\n", b);
	a = printf("%1s", "%%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%15s", "abcdefghijklmnop");
	printf("-> %d\n", b);
	a = printf("%15s", "abcdefghijklmnop");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%15s", "-a");
	printf("-> %d\n", b);
	a = printf("%15s", "-a");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%15s", "-12");
	printf("-> %d\n", b);
	a = printf("%15s", "-12");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%15s", "0");
	printf("-> %d\n", b);
	a = printf("%15s", "0");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%15s", "%%");
	printf("-> %d\n", b);
	a = printf("%15s", "%%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.s", "abcdefghijklmnop");
	printf("-> %d\n", b);
	a = printf("%.s", "abcdefghijklmnop");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.s", "-a");
	printf("-> %d\n", b);
	a = printf("%.s", "-a");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.s", "-12");
	printf("-> %d\n", b);
	a = printf("%.s", "-12");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.s", "0");
	printf("-> %d\n", b);
	a = printf("%.s", "0");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.s", "%%");
	printf("-> %d\n", b);
	a = printf("%.s", "%%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1.s", "abcdefghijklmnop");
	printf("-> %d\n", b);
	a = printf("%1.s", "abcdefghijklmnop");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1.s", "-a");
	printf("-> %d\n", b);
	a = printf("%1.s", "-a");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1.s", "-12");
	printf("-> %d\n", b);
	a = printf("%1.s", "-12");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1.s", "0");
	printf("-> %d\n", b);
	a = printf("%1.s", "0");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%1.s", "%%");
	printf("-> %d\n", b);
	a = printf("%1.s", "%%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*s", -2, "abcdefghijklmnop");
	printf("-> %d\n", b);
	a = printf("%*s", -2, "abcdefghijklmnop");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*s", -2, "-a");
	printf("-> %d\n", b);
	a = printf("%*s", -2, "-a");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*s", -2, "-12");
	printf("-> %d\n", b);
	a = printf("%*s", -2, "-12");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*s", -2, "0");
	printf("-> %d\n", b);
	a = printf("%*s", -2, "0");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%*s", -2, "%%");
	printf("-> %d\n", b);
	a = printf("%*s", -2, "%%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*s", -2, "abcdefghijklmnop");
	printf("-> %d\n", b);
	a = printf("%-*s", -2, "abcdefghijklmnop");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*s", -2, "-a");
	printf("-> %d\n", b);
	a = printf("%-*s", -2, "-a");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*s", -2, "-12");
	printf("-> %d\n", b);
	a = printf("%-*s", -2, "-12");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*s", -2, "0");
	printf("-> %d\n", b);
	a = printf("%-*s", -2, "0");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-*s", -2, "%%");
	printf("-> %d\n", b);
	a = printf("%-*s", -2, "%%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.*s", -2, "abcdefghijklmnop");
	printf("-> %d\n", b);
	a = printf("%.*s", -2, "abcdefghijklmnop");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.*s", -2, "-a");
	printf("-> %d\n", b);
	a = printf("%.*s", -2, "-a");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.*s", -2, "-12");
	printf("-> %d\n", b);
	a = printf("%.*s", -2, "-12");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.*s", -2, "0");
	printf("-> %d\n", b);
	a = printf("%.*s", -2, "0");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%.*s", -2, "%%");
	printf("-> %d\n", b);
	a = printf("%.*s", -2, "%%");
	printf("-> %d \n", a);
ft_printf("\n");
	ft_printf("--- ERREURS ---\n");
	b = ft_printf("%-2s", NULL);
	printf("-> %d\n", b);
	printf("(null)-> 6\n");
ft_printf("\n");
	b = ft_printf("%.s", NULL);
	printf("-> %d\n", b);
	printf("-> 0\n");
ft_printf("\n");
	b = ft_printf("%-4s", NULL);
	printf("-> %d\n", b);
	printf("(null)-> 6\n");
ft_printf("\n");
	b = ft_printf("%-2.4s", NULL);
	printf("-> %d\n", b);
	printf("(nul-> 4\n");
ft_printf("\n");
	b = ft_printf("%-8.12s", NULL);
	printf("-> %d\n", b);
	printf("(null)  -> 8\n");
ft_printf("\n");
	b = ft_printf("%3s", NULL);
	printf("-> %d\n", b);
	printf("(null)-> 6\n");
ft_printf("\n");
	b = ft_printf("%8s", NULL);
	printf("-> %d\n", b);
	printf("  (null)-> 8\n");
ft_printf("\n");
	b = ft_printf("%---2s", NULL);
	printf("-> %d\n", b);
	printf("(null)-> 6\n");
ft_printf("\n");
	b = ft_printf("%.*s", -2, NULL);
	printf("-> %d\n", b);
	printf("(null)-> 6\n");
ft_printf("\n");
	b = ft_printf("%.0s", NULL);
	printf("-> %d\n", b);
	printf("-> 0\n");
ft_printf("\n");
	b = ft_printf("%.1s", NULL);
	printf("-> %d\n", b);
	printf("(-> 1\n");
ft_printf("\n");
	b = ft_printf("%.4s", NULL);
	printf("-> %d\n", b);
	printf("(nul-> 4\n");
ft_printf("\n");
	b = ft_printf("%12.3s", NULL);
	printf("-> %d\n", b);
	a = printf("%12.3s", NULL);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-15.p", NULL);
	printf("-> %d\n", b);
	printf("0x             ");
	printf("-> 15\n");
ft_printf("\n");
	b = ft_printf("Texte suivi d'un %");
	printf("-> %d\n", b);
	a = printf("Texte suivi d'un %");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%p", NULL);
	printf("-> %d\n", b);
	a = printf("%p", NULL);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%5");
	printf("-> %d\n", b);
	a = printf("%5");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-5");
	printf("-> %d\n", b);
	a = printf("%-5");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%05");
	printf("-> %d\n", b);
	a = printf("%05");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%-05");
	printf("-> %d\n", b);
	a = printf("%-05");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%5.p", NULL);
	printf("-> %d\n", b);
	a = printf("%5.p", NULL);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%09s", "hi low");
	printf("-> %d\n", b);
	a = printf("%09s", "hi low");
	printf("-> %d \n", a);
ft_printf("\n");
*/



	b = ft_printf("%-4.4%");
	printf("-> %d\n", b);
	printf("-> 4 \n");
ft_printf("\n");
	b = ft_printf("%0*.%", 2);
	printf("-> %d\n", b);
	a = printf("%0*.%", 2);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%0*.%", 3);
	printf("-> %d\n", b);
	a = printf("%0*.%", 3);
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%04.3%");
	printf("-> %d\n", b);
	a = printf("%04.3%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%04.4%");
	printf("-> %d\n", b);
	a = printf("%04.4%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%04%");
	printf("-> %d\n", b);
	a = printf("%04%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%--4.%");
	printf("-> %d\n", b);
	a = printf("%--4.%");
	printf("-> %d \n", a);
ft_printf("\n");
	b = ft_printf("%--4.*%", -4);
	printf("-> %d\n", b);
	a = printf("%--4.*%", -4);
	printf("-> %d \n", a);
ft_printf("\n");


ft_printf("\n");


	return (0);
}
