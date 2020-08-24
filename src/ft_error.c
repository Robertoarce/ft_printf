/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:57:32 by titorium          #+#    #+#             */
/*   Updated: 2020/08/24 15:17:55 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_error_check(t_flags flag, const char *chain)
{
	(void)flag;
	if (chain[0] == '-' && chain[1] == '0')
		return (1);
	if (
	return (-1);
}

