/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:29:14 by titorium          #+#    #+#             */
/*   Updated: 2020/09/04 17:00:59 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{

int width = -4;
	int precision = -4;


			printf("\n -------- |-0*.*d|------ \n");

	while (width<9)
	{
		while (precision<9)
		{



			printf("\n width =%d, precision= %da|",width,precision);
			printf("   =>%-0*.*d",width, precision, 198);

			precision++;
		}
		width++;
		precision=-4;
	}


width= -4;
precision = -4;


			printf("\n --------0*.*d------ \n");

	while (width<9)
	{
		while (precision<9)
		{



			printf("\n width =%d, precision= %da|",width,precision);
			printf("   =>%0*.*d",width, precision, 198);

			precision++;
		}
		width++;
		precision=-4;
	}


width= -4;
precision = -4;
printf("\n --------0*.*d------ \n");

	while (width<9)
	{
		while (precision<9)
		{



			printf("\n width =%d, precision= %d",width,precision);
			printf("   =>|%0*.*d|",width, precision, 0);

			precision++;
		}
		width++;
		precision=-4;
	}

width= -4;
precision = 0;
int a=0;
printf("\n ---=========-----0*.*d--======---- \n");

	while (width<9)
	{

			printf("\n width =%d, precision= %d|",width,precision);
			a=printf("   =>|%0*.*d",width, precision, 0);
			printf("|\n a= %d|",a);
			
		width++;
	}

	printf("\n ---============--- \n");


printf("\n --------0*d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			printf("\n width =	%d",width);
			printf("	%0*d",width, 198);

		width++;
	}

printf("\n --------*d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			printf("\n width =	%d",width);
			printf("	%*d",width, 198);

		width++;
	}
printf("\n -------*.d------- \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			printf("\n width =	%d",width);
			printf("	%*.d",width, 198);

		width++;
	}

printf("\n --------0*.d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			printf("\n width =	%d",width);
			printf("	%0*.d",width, 198);

		width++;
	}
printf("\n ------0*d-------- \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			printf("\n width =	%d",width);
			printf("	%0*d",width, 198);

		width++;
	}
printf("\n --------0.d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			printf("\n width =	%d",width);
			printf("	%0*.d",width, 198);

		width++;
	}
width= -4;
printf("\n --------0.d------ \n");

	while (width<9)
	{



			printf("\n number =%d",width);
			printf("   =>|%0.d|", width);

		width++;
	}


			printf("\n -------------- \n");
			printf("\n -------------- \n");
			printf("\n -------------- \n");
			printf("\n -------------- \n");
			printf("\n -------------- \n");
			printf("\n -------------- \n");

 width = -4;
	 precision = -4;



			ft_printf("\n --------0*.*d------ \n");

	while (width<9)
	{
		while (precision<9)
		{



			ft_printf("\n width =%d, precision= %da|",width,precision);
			ft_printf("   =>%0*.*d",width, precision, 198);

			precision++;
		}
		width++;
		precision=-4;
	}


width= -4;
precision = -4;
ft_printf("\n --------0*.*d------ \n");

	while (width<9)
	{
		while (precision<9)
		{



			ft_printf("\n width =%d, precision= %d",width,precision);
			ft_printf("   =>|%0*.*d|",width, precision, 0);

			precision++;
		}
		width++;
		precision=-4;
	}

width= -4;
precision = 0;
 a=0;
ft_printf("\n ---=========-----0*.*d--======---- \n");

	while (width<9)
	{

			ft_printf("\n width =%d, precision= %d|",width,precision);
			a=ft_printf("   =>|%0*.*d",width, precision, 0);
			ft_printf("|\n a= %d|",a);
			
		width++;
	}

	ft_printf("\n ---============--- \n");


ft_printf("\n --------0*d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			ft_printf("\n width =	%d",width);
			ft_printf("	%0*d",width, 198);

		width++;
	}

ft_printf("\n --------*d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			ft_printf("\n width =	%d",width);
			ft_printf("	%*d",width, 198);

		width++;
	}
ft_printf("\n -------*.d------- \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			ft_printf("\n width =	%d",width);
			ft_printf("	%*.d",width, 198);

		width++;
	}

ft_printf("\n --------0*.d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			ft_printf("\n width =	%d",width);
			ft_printf("	%0*.d",width, 198);

		width++;
	}
ft_printf("\n ------0*d-------- \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			ft_printf("\n width =	%d",width);
			ft_printf("	%0*d",width, 198);

		width++;
	}
ft_printf("\n --------0.d------ \n");

 width = -4;
precision = -4;
	while (width<9)
	{
			ft_printf("\n width =	%d",width);
			ft_printf("	%0*.d",width, 198);

		width++;
	}
width= -4;
ft_printf("\n --------0.d------ \n");

	while (width<9)
	{



			ft_printf("\n number =%d",width);
			ft_printf("   =>|%0.d|", width);

		width++;
	}




return(0);
}
