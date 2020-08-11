/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 17:32:47 by titorium          #+#    #+#             */
/*   Updated: 2020/08/05 16:32:09 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"

typedef struct flags
{
	int		negative;
	int		zero;
	int		width;
	int		precision;
	int		star1;
	int		point;
	char	specifier;

} flags;

int		ft_printf(const char *str, ...);


#endif
