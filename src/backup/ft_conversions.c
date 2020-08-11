/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 17:37:42 by titorium          #+#    #+#             */
/*   Updated: 2020/08/11 12:20:56 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_to_pointer.c"
#include "../libft/ft_putnbr.c"
#include "../libft/ft_uitoa.c"
#include "../libft/ft_itoa.c"
#include "../libft/ft_calloc.c"
#include "../libft/ft_bzero.c"
#include "ft_to_mhexa.c"
#include "ft_to_bighexa.c"

void ft_print_repeat(char c,int size)
{
	while(size--)
		ft_putchar(c);
}

int ft_putspaces(int num)
{
	int counter;
	
	counter = 0;
	while (counter++ < num)
		ft_putchar(' ');
	return (num);	
}

int ft_putzeros(int num)
{
	int counter;
	
	counter = 0;
	while (counter++ < num)
		ft_putchar('0');
	return (num);	
}


/*--------- CHAR ----------*/

int ft_c_conv(flags flag, va_list lst)
{	
	int		counter;
	int		spaces;
	int		word_len;
	int		tab;


	counter = 0;
	tab = va_arg(lst, int); //get the word
	word_len = 1; // (null) if no word
	spaces = 0;
	if (flag.width > word_len)
		spaces = flag.width - word_len;
	//print spaces
	if (flag.negative == 1 )
	{
		ft_putchar(tab);
		counter = 1 + ft_putspaces(spaces);
	}
	else 
	{
		counter = 1 + ft_putspaces(spaces);
	   	ft_putchar(tab);
	}
	while (spaces > counter++)
		ft_putchar(' ');
	//print word
	return (counter);
}

/*--------- STRING ----------*/
int ft_putword(char *tab, int word_len, flags flag)
{
	if ( tab == NULL && flag.point == 0)
	{
		ft_putstr("(null)");

		return(6);
	}
	ft_putstrn(tab, word_len);	
	return (word_len);
}


int ft_s_conv(flags flag, va_list lst)
{	
	int		counter;
	int		spaces;
	int		word_len;
	char	*tab;


	counter = 0;

	tab = va_arg(lst, char*); //get the word
	word_len = 6; // (null) if no word
	if (tab != NULL)
		word_len = ft_strlen(tab); // get word len
	if (flag.precision < word_len && flag.point == 1)
	   word_len = flag.precision;
	spaces = 0;
	if (flag.width > word_len)
		spaces = flag.width - word_len;
	//print spaces
	if (flag.negative == 1 )
		counter = ft_putword(tab, word_len, flag) + ft_putspaces(spaces);
	else 
		counter = ft_putspaces(spaces) + ft_putword(tab, word_len, flag);
		
	while (spaces > counter++)
		ft_putchar(' ');
	//print spaces + word  
	return (counter);
}


/*--------- POINTER  ----------*/


int ft_p_conv(flags flag, va_list lst)
{
	int 			counter;
	int		word_len;
	int		spaces;
	unsigned long	ptr;
	char			*tab;

	counter = 0;
	ptr = va_arg(lst , unsigned long long);
	tab = ft_to_pointer(ptr,16);
	word_len = ft_strlen(tab);	
	if (flag.precision < word_len && flag.point == 1)
	   word_len = flag.precision;
	spaces = 0;
	if (flag.width > word_len)
		spaces = flag.width - word_len;
	//print spaces + word
	if (flag.negative == 1 )
		counter = ft_putword(tab, word_len, flag) + ft_putspaces(spaces);
	else 
		counter = ft_putspaces(spaces) + ft_putword(tab, word_len, flag);
	free(tab);	
	while (spaces > counter++)
		ft_putchar(' ');
	return (counter);
}

/*--------- DIGIT  ----------*/

int ft_putneg(int sign)
{
	if (sign == 0)
		return (0);
	ft_putchar('-');
	return (1);
}
	
int ft_d_conv(flags flag, va_list lst)
{
	int		counter;
	int		spaces;
	int		word_len;
	int		negative;
	int		zeros;
	char	*tab;

	negative = 0;
	zeros = 0;
	spaces = va_arg(lst, int); //get the word
	if (spaces < 0)
	{
		negative = 1;
		spaces = spaces * -1;
	}
	tab = ft_itoa(spaces);
	word_len = ft_strlen(tab);
	spaces = 0;
	if (flag.precision > word_len && flag.point == 1)
	   zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros - negative;
	//print spaces
	if (flag.negative == 1 )
		counter = ft_putneg(negative) + ft_putzeros(zeros) + ft_putword(tab, word_len, flag) + ft_putspaces(spaces);
	else 
		counter = ft_putspaces(spaces) + ft_putneg(negative) +  ft_putzeros(zeros) + ft_putword(tab, word_len, flag);
	while (spaces > counter++)
		ft_putchar('0');
	free (tab);
	//print spaces + word  
	return (counter);
}


/*--------- UN  ----------*/


int ft_u_conv(flags flag, va_list lst)
{
	int		counter;
	int		spaces;
	int		word_len;
	int		zeros;
	char	*tab;

	zeros = 0;
	spaces = va_arg(lst, int64_t); //get the word
	tab = ft_uitoa(spaces);
	word_len = ft_strlen(tab);
	spaces = 0;
	if (flag.precision > word_len && flag.point == 1)
	   zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros;
	//print spaces
	if (flag.negative == 1 )
		counter =  ft_putzeros(zeros) + ft_putword(tab, word_len, flag) + ft_putspaces(spaces);
	else 
		counter = ft_putspaces(spaces) +  ft_putzeros(zeros) + ft_putword(tab, word_len, flag);
	while (spaces > counter++)
		ft_putchar('0');
	free (tab);
	//print spaces + word  
	return (counter);

}
/*--------- HEXA  MINUS   ----------*/


  int ft_x_conv(flags flag, va_list lst)
{
	int		counter;
	unsigned long long		spaces;
	int		word_len;
	int		negative;
	int		zeros;
	char	*tab;

	negative = 0;
	zeros = 0;
	spaces = va_arg(lst , unsigned long long);
	if (spaces < 0)
	{
		negative = 1;
		spaces = spaces * -1;
	}
	tab = ft_to_mhexa(spaces, 16);
	word_len = ft_strlen(tab);
	spaces = 0;
	if (flag.precision > word_len && flag.point == 1)
	   zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros - negative;
	//print spaces
	if (flag.negative == 1 )
		counter = ft_putneg(negative) + ft_putzeros(zeros) + ft_putword(tab, word_len, flag) + ft_putspaces(spaces);
	else 
		counter = ft_putspaces(spaces) + ft_putneg(negative) +  ft_putzeros(zeros) + ft_putword(tab, word_len, flag);
	while ((int)spaces > counter++)
		ft_putchar('0');
	free (tab);
	//print spaces + word  
	return (counter);

}

int ft_xx_conv(flags flag, va_list lst)
{
	int		counter;
	unsigned long long		spaces;
	int		word_len;
	int		negative;
	int		zeros;
	char	*tab;

	negative = 0;
	zeros = 0;
	spaces = va_arg(lst , unsigned long long);
	if (spaces < 0)
	{
		negative = 1;
		spaces = spaces * -1;
	}
	tab = ft_to_bighexa(spaces, 16);
	word_len = ft_strlen(tab);
	spaces = 0;
	if (flag.precision > word_len && flag.point == 1)
	   zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros - negative;
	//print spaces
	if (flag.negative == 1 )
		counter = ft_putneg(negative) + ft_putzeros(zeros) + ft_putword(tab, word_len, flag) + ft_putspaces(spaces);
	else 
		counter = ft_putspaces(spaces) + ft_putneg(negative) +  ft_putzeros(zeros) + ft_putword(tab, word_len, flag);
	while ((int)spaces > counter++)
		ft_putchar('0');
	free (tab);
	//print spaces + word  
	return (counter);

	
}

