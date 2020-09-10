/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:16:50 by rarce             #+#    #+#             */
/*   Updated: 2020/09/10 13:00:40 by titorium         ###   ########.fr       */
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

int			ft_format(va_list lst, const char *chain)
{
	t_flags	flag;
	char	*chaincuted;
	int		button;
	
	button = 0;
	ft_flags_init(&flag);
	if (ft_strlen(chain) < 1)
		return(-1);
	chaincuted = ft_trim(chain, &button);

	ft_get_flags(&flag, chaincuted, lst);
	if (button == 1)
		free (chaincuted);
	return (ft_print_args(flag, lst) - 1);
}

int			ft_printf(const char *chain, ...)
{
	int		print_count;
	int		i;
	va_list lst;

	i = 0;
	print_count = 0;
	va_start(lst, chain);

	while (chain[i] != '\0')
	{
		if (chain[i] == '%' && chain[i + 1] !='\0')
		{
			print_count = print_count + ft_format(lst, &chain[i + 1]);
			i = i + ft_spec_pos(&chain[i + 1]) + 2;
		}
		else
			i = i + ft_putcharncount(chain[i], &print_count);
	}
	va_end(lst);
	return (print_count);
}
