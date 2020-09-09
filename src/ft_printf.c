/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:16:50 by rarce             #+#    #+#             */
/*   Updated: 2020/09/09 16:38:54 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../includes/ft_printf.h"
#include "../libft/libft.h"

static int	ft_putcharncount(char c, int *p_count)
{
	ft_putchar(c);
	*p_count = *p_count + 1;
	return (1);
}

int			ft_format(va_list lst, const char *chain, int *error)
{
	t_flags	flag;
	int		error_count;
	char	*chaincuted;
	
	ft_flags_init(&flag);
	if (ft_strlen(chain) < 1)
		return(-1);
	chaincuted = ft_trim(chain);

	ft_get_flags(&flag, chaincuted, lst);
	error_count = -1;
	error_count = ft_error_check(flag, chain);
	if (error_count > -1)
	{
		*error = -1;
		ft_putstrn((char*)chain, error_count);
		return (error_count);
	}
	return (ft_print_args(flag, lst) - 1);
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

//ft_putstr("\nchain=");ft_putstr((char*)chain);ft_putstr("\n");
	while (chain[i] != '\0')
	{
//ft_putstr("\n[i]=");ft_putnbr(i);ft_putstr(", ");
//ft_putstr("chain[i]=");ft_putchar(chain[i]);ft_putstr("\n");
		if (chain[i] == '%' && chain[i + 1] !='\0')
		{
			print_count = print_count + ft_format(lst, &chain[i + 1], &error);
			if (error == -1)
				return (print_count);
			i = i + ft_spec_pos(&chain[i + 1]) + 2;
		}
		else
			i = i + ft_putcharncount(chain[i], &print_count);
	}
	va_end(lst);
	return (print_count);
}
