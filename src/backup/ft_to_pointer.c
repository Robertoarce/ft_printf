/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:54:17 by titorium          #+#    #+#             */
/*   Updated: 2020/08/07 11:22:27 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	ft_hexa(int num)
{
	char *hexa;

	hexa = "0123456789abcdef";
	return(hexa[num]);
}

char *ft_to_pointer(unsigned long num, int base)
{
	int counter;
	unsigned long long remainder;
	char *ptr;

	counter = 0;
	remainder = num;
	while (remainder > 0 && counter++ > -1)
		remainder = remainder / base;
	if (!(ptr = (char *)malloc(sizeof(char) * (counter + 1 +  2 ))))
		return ("error");
	ptr[counter + 1 + 2] = '\0';

	while (num > 0 && counter > -1)
	{
		remainder =  num / base ;
		ptr[ 2 + counter - 1] = ft_hexa(num % base);
		num = remainder;
		counter--;
	}
	ptr[0] = '0';	
	ptr[1] = 'x';	

return (ptr);
}

