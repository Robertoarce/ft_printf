/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 13:35:55 by titorium          #+#    #+#             */
/*   Updated: 2020/08/04 16:54:20 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void doit(const char *item, ...)
{
	va_list ap;
	int size;
	char *p;


	size = 0;

	va_start(ap, item);
	
	p = "asdf";


	
	size = va_arg(ap, int);

	printf("got  int= %d", size);

	p = va_arg(ap, char*);
	printf("got char = %s", p);
	printf("got it");
}

int main()
{
	doit("asdfjlkj",1234,"qwewqer","zxcvzxc",987,654,"plmlp");



	return (0);
}




