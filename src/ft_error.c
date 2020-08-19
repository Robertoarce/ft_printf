/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:57:32 by titorium          #+#    #+#             */
/*   Updated: 2020/08/19 11:23:09 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int		ft_error_check(t_flags flag, const char *chain)
{
	(void)flag;
	if (chain[0] == '-' && chain[1] == '0')
		return (1);
	return (-1);
}

