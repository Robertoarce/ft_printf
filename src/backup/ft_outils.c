/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:53:21 by titorium          #+#    #+#             */
/*   Updated: 2020/08/11 12:17:23 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "ft_conversions.c"
#include <stdio.h>
#include <unistd.h>

int ft_isin(const char *tab, char c)
{	
	int counter;

	counter = 0;
	while (tab[counter] != '\0' && tab[counter])
	{
		if(tab[counter] == c)
			return (counter);
		counter++;
	}
	return (-1);
}

int ft_spec_pos(const char *tab)
{	
	int counter;

	counter = 0;
	while (tab[counter] != '\0' && tab[counter])
	{
		if(tab[counter] == 'c' 
				|| tab[counter] =='s' || tab[counter] =='p' 
				|| tab[counter] =='d' || tab[counter] =='i' 
				|| tab[counter] =='u' || tab[counter] =='x' 
				|| tab[counter] =='X' )//|| tab[counter] =='%')
			return (counter);
		counter++;
	}
	return (-1);
}


/*----------------------------------------------------------------------*/
/*			 	1-a) init flags											*/
/*----------------------------------------------------------------------*/

void	ft_flags_init(flags *flag)
{
	flag->negative = 0;
	flag->zero = 0;
	flag->width = 0;
	flag->precision = 0;
	flag->specifier = 'a';
	flag->star1 = 0;
	flag->point = 0;
}



/*----------------------------------------------------------------------*/
/*			 	1-b) get specifiers										*/
/*----------------------------------------------------------------------*/
void ft_get_specifiers(flags *flag, const char *chain, va_list lst)
{
	unsigned int	start;
	size_t			size;
	char 			*number_word;

	start = 0;
	size = 0;

	//(void)lst;

// negative
	if (chain[0] == '-')
		flag->negative = 1;
//zero
	if (chain[0] == '0')
		flag->zero = 1;
//width

	if (chain[0] == '-' || chain[0] == '0')
		start = 1;
	if (ft_isin(chain, '.') >= 0)
		size = ft_isin(chain, '.') - start;
	else
		size  = ft_spec_pos(chain) - start;

	number_word = ft_substr(chain, start, size);

	if (ft_isin(number_word,'*') >= 0)
	{
		flag->star1 = 1;
		flag->width = va_arg(lst,int);
	}
	else
		flag->width = ft_atoi(ft_substr(chain, start, size));


//precision
	if (ft_isin(chain,'.') >= 0)
	{
		start = ft_isin(chain,'.') + 1;
		size  = ft_spec_pos(chain) - start;
	
		number_word = ft_substr(chain, start, size);
		
		if (chain[start] == '*')
			flag->precision = va_arg(lst, int);
		else
			flag->precision = ft_atoi(number_word);
	}
//specifier
	flag->specifier = chain[ft_spec_pos(chain)];

//star
	if (ft_isin(chain, '.') >= 0)
		flag->point = 1;


}

/*----------------------------------------------------------------------*/
/*			 	2) error handling ONLY flags NO ARGUMENTS YET			*/
/*----------------------------------------------------------------------*/

int	ft_error_check(flags flag, const char *chain)
{
	(void)flag;
	if (chain[0] == '-' && chain[1] == '0')
		return(1);
	




	return (-1);
}



/*----------------------------------------------------------------------*/
/*			 	3) Get arguments										*/
/*----------------------------------------------------------------------*/

int ft_get_args(flags flag, va_list lst)
{

	if (flag.specifier == 'c')
		return (ft_c_conv(flag, lst));

	if (flag.specifier == 's')
		return (ft_s_conv(flag, lst));

	if (flag.specifier == 'p')
		return (ft_p_conv(flag, lst));

	if (flag.specifier == 'd')
		return (ft_d_conv(flag, lst));

	if (flag.specifier == 'i')
		return (ft_d_conv(flag, lst));

	if (flag.specifier == 'u')
		return (ft_u_conv(flag, lst));


	if (flag.specifier == 'x')
		return (ft_x_conv(flag, lst));

	if (flag.specifier == 'X')
		return (ft_xx_conv(flag, lst));

	return(-1);
}
