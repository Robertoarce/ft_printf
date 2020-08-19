/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:48:12 by titorium          #+#    #+#             */
/*   Updated: 2020/08/11 11:11:16 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numsized(long num)
{
	size_t	size;
	long	n;

	n = num;
	size = 0;
	if (n == 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char			*ft_uitoa(unsigned int n)
{
	char	*number;
	size_t	nb_len;
	size_t	start;
	long	num;

	num = n;
	nb_len = ft_numsized(num);
	number = NULL;
	if ((number = ft_calloc(sizeof(char), nb_len + 1)) == NULL)
		return (number);
	start = 0;
	number[nb_len + 1] = '\0';
	number[nb_len] = '\0';
	if (num < 0)
	{
		number[0] = '-';
		start++;
		num = num * -1;
	}
	while (nb_len-- > start)
	{
		number[nb_len] = (num % 10) + 48;
		num = num / 10;
	}
	return (number);
}
