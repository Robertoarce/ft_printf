/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:36:47 by titorium          #+#    #+#             */
/*   Updated: 2020/09/07 15:00:18 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	ft_flags_init(t_flags *flag)
{
	flag->negative = 0;
	flag->zero = 0;
	flag->width = 0;
	flag->precision = 1;
	flag->specifier = 'a';
	flag->star1 = 0;
	flag->point = 0;
}

static void	ft_checkneg(t_flags *flag)
{
	
	flag->width = flag->width;
	if (flag->width < 0)
	{
		flag->width = flag->width * -1;
		flag->negative = 1;
		flag->zero = 0;
	}
	if (flag->precision < 0)
	{
		flag->point = 0;
		flag->precision = flag->precision * -1;
	}
}

void	ft_get_flags(t_flags *flag, const char *chain, va_list lst)
{
	unsigned int	start;
	size_t			size;
	char			*number_word;

	start = 0;
	size = 0;
	if (chain[0] == '-')
		flag->negative = 1;
	if (chain[0] == '0')
		flag->zero = 1;
	if (chain[0] == '-' || chain[0] == '0')
		start = 1;
	if (ft_isin(chain, '.') >= 0)
		size = ft_isin(chain, '.') - start;
	else
		size = ft_spec_pos(chain) - start;
	number_word = ft_substr(chain, start, size);
	if (ft_isin(number_word, '*') >= 0)
	{
		flag->star1 = 1;
		flag->width = va_arg(lst, int);
	}
	else
		flag->width = ft_atoi2(ft_substr(chain, start, size));
	ft_part2(&*flag, chain, lst, &number_word);
}

void	ft_part2(t_flags *flag, const char *chain, va_list lst, char **num_word)
{
	unsigned int	start;
	size_t			size;

	start = 0;
	size = 0;
	if (ft_isin(chain, '.') >= 0)
	{
		start = ft_isin(chain, '.') + 1;
		size = ft_spec_pos(chain) - start;
		free(*num_word);
		*num_word = ft_substr(chain, start, size);
		if (chain[start] == '*')
			flag->precision = va_arg(lst, int);
		else
			flag->precision = ft_atoi(*num_word);
	}
	flag->specifier = chain[ft_spec_pos(chain)];
	if (ft_isin(chain, '.') >= 0)
		flag->point = 1;
	ft_checkneg(&*flag);
	free(*num_word);
}

int		ft_print_args(t_flags flag, va_list lst)
{
	if (flag.specifier == 'c')
		return (ft_c_conv(flag, lst));
	if (flag.specifier == 's')
		return (ft_s_conv(flag, lst));
	if (flag.specifier == 'p')
		return (ft_p_conv(flag, lst));
	if (flag.specifier == 'd')
		return (ft_d_conv(flag, lst, 0, 0));
	if (flag.specifier == 'i')
		return (ft_d_conv(flag, lst, 0, 0));
	if (flag.specifier == 'u')
		return (ft_u_conv(flag, lst));
	if (flag.specifier == 'x')
		return (ft_x_conv(flag, lst, 0, 0));
	if (flag.specifier == 'X')
		return (ft_xx_conv(flag, lst, 0, 0));
	if (flag.specifier == '%')
		return (ft_pp_conv(flag, lst));
	return (-1);
}
