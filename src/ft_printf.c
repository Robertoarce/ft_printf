/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:16:50 by rarce             #+#    #+#             */
/*   Updated: 2020/08/24 20:03:45 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

static int	ft_putcharncount(char c, int *p_count)
{
	ft_putchar(c);
	*p_count = *p_count + 1;
	return (1);
}

int			ft_format(va_list lst, const char *chain, int *error, int p_cnt)
{
	t_flags	flag;
	int		error_count;

	ft_flags_init(&flag);
	if (chain[0] == '%')
		return (ft_putcharncount('%', &p_cnt));
	ft_get_flags(&flag, chain, lst);
	error_count = -1;
	error_count = ft_error_check(flag, chain);
	if (error_count > -1)
	{
		*error = -1;
		ft_putstrn((char*)chain, error_count);
		return (error_count);
	}
	return (ft_get_args(flag, lst));
}

int			ft_printf(const char *chain, ...)
{
	int		print_count;
	int		error;
	int		i;
	va_list lst;

	i = 0;
	error = 0;
	print_count = 0;
	va_start(lst, chain);
	while (chain[i] != '\0' && chain[i])
	{
		if (chain[i] == '%')
		{
			print_count = ft_format(lst, &chain[i + 1], &error, print_count);
			if (error == -1)
				return (print_count);
			i = i + ft_spec_pos(&chain[i]) + 1;
		}
		else
		{
			i = i + ft_putcharncount(chain[i], &print_count);
		}
	}
	va_end(lst);
	return (print_count);
}
