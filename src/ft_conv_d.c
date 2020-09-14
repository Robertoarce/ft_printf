/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:57:35 by titorium          #+#    #+#             */
/*   Updated: 2020/09/14 19:04:48 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

static size_t	ft_numsize2(long num)
{
	size_t	size;
	long	n;

	n = num;
	size = 0;
	if (n < 0 && n != -2147483648)
	{
		n = n * -1;
		size++;
	}
	if (n == 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static char		*ft_itoa2(int n)
{
	char	*number;
	size_t	nb_len;
	size_t	start;
	long	num;

	num = n;
	nb_len = ft_numsize2(num);
	number = "";
	if ((number = ft_calloc(sizeof(char), nb_len + 1)) == NULL)
		return (number);
	start = 0;
	if (num < 0)
		num = num * -1;
	while (nb_len-- > start)
	{
		number[nb_len] = (num % 10) + 48;
		num = num / 10;
	}
	return (number);
}

static int		fter(t_flags f, char **tab, int neg, int wlen)
{
	int spaces;

	spaces = wlen;
	spaces = neg;
	spaces = f.width - wlen - neg;
	if ((*tab)[0] == '0' && (*tab)[1] == '\0'
			&& f.precision == 0 && f.point == 1)
	{
		spaces = f.width - neg;
		free(*tab);
		return (1 + ft_s(spaces));
	}
	spaces = -1;
	return (spaces);
}

int				ft_negative(int *neg, va_list lst, char **tab, int *word_len)
{
	long int spaces;

	spaces = va_arg(lst, int);
	if (spaces < 0)
	{
		*neg = 1;
		spaces = spaces * -1;
	}
	free(*tab);
	*tab = ft_itoa2(spaces);
	*word_len = 0;
	if (*tab)
		*word_len = ft_strlen(*tab);
	spaces = 0;
	return ((int)spaces);
}

int				ft_d_conv(t_flags flag, va_list lst, int negative, int zeros)
{
	int		counter;
	int		spaces;
	int		word_len;
	char	*tab;

	tab = ft_initialize(&counter, &spaces);
	spaces = ft_negative(&negative, lst, &tab, &word_len);
	if (flag.width > word_len && flag.point == 0 && flag.zero == 1)
		zeros = flag.width - word_len - negative;
	if (flag.point == 1 && flag.precision > word_len)
		zeros = flag.precision - word_len;
	if (flag.width > (word_len + zeros))
		spaces = flag.width - word_len - zeros - negative;
	if ((counter = fter(flag, &tab, negative, word_len)) > -1)
		return (counter);
	if (flag.negative == 1)
		counter = ftp(negative, zeros, tab, word_len, flag) + ft_s(spaces);
	else
		counter = ftp2(spaces, negative, zeros) + ft_w(tab, word_len, flag);
	while ((int)spaces > counter++)
		ft_putchar('0');
	free(tab);
	return (counter);
}
