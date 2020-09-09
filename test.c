/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/09/09 12:14:27 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{

	int a;
	int b;


ft_printf("\n--------\n");
a=ft_printf("|hello, %s.|", "gavin");
ft_printf("\nmine=%d\n", a);
ft_printf("\n--------\n");

ft_printf("\n--------\n");
b=printf("|hello, %s.|", "gavin");
printf("\nmine=%d\n", b);
printf("\n--------\n");

return (0);
}
