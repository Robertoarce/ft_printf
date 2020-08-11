/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_mhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:05:53 by titorium          #+#    #+#             */
/*   Updated: 2020/08/11 12:07:56 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_hexa1(int num)
{
	char *hexa;

	hexa = "0123456789abcdef";
	return(hexa[num]);
}

char *ft_to_mhexa(unsigned long num, int base)
{
	int counter;
	unsigned long long remainder;
	char *ptr;

	counter = 0;
	remainder = num;
	while (remainder > 0 && counter++ > -1)
		remainder = remainder / base;
	if (!(ptr = (char *)malloc(sizeof(char) * (counter + 1))))
		return ("error");
	ptr[counter + 1] = '\0';

	while (num > 0 && counter > -1)
	{
		remainder =  num / base ;
		ptr[counter - 1] = ft_hexa1(num % base);
		num = remainder;
		counter--;
	}
	return (ptr);
}

