/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:16:50 by rarce             #+#    #+#             */
/*   Updated: 2020/06/25 19:31:19 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "stdio.h"
#include "stdarg.h"

int my_printf(const char *s, ...)
{

   va_list va;
   va_start(va, s);

   printf("s=%s\n",s);
  
  
  va_arg(va,char*);
  
  printf("s=%s\n",s);
 	 
  
   va_end(va);
	return(0);
}



int main()
{
	char tab[] = "asdlkjadl;kj";
	char tab2[]= "34hgj";
	int  tab3[]= {45};
	char tab4[]= "6kjhgfkjadl;kj";
	int  tab5[]= {76,22,45};

	my_printf(tab,55949,"euhfn",999,"4lkm",388,-239,tab4);

 return(0);

}
