/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 13:06:52 by titorium          #+#    #+#             */
/*   Updated: 2020/08/26 18:29:12 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	int		negative;
	int		zero;
	int		width;
	int		precision;
	int		star1;
	int		point;
	char	specifier;
}				t_flags;

int				ft_printf(const char *str, ...);

void			ft_flags_init(t_flags *flag);
void			ft_get_flags(t_flags *flag, const char *chain, va_list lst);
void			ft_part2(t_flags *flag, const char *chain, va_list lst, char **num_word);
//void			ft_part2(t_flags *flag, const char *chain, va_list lst);
int				ft_get_args(t_flags flag, va_list lst);

int				ft_format(va_list lst, const char *chain, int *error,
		int p_cnt);

int				ft_isin(const char *tab, char c);
int				ft_spec_pos(const char *tab);

void			ft_print_repeat(char c, int size);
int				ft_s(int num);
int				ft_z(int num);
int				ft_w(char *tab, int word_len, t_flags flag);
int				ft_n(int sign);
int				ft_findc(const char *tab, char c);

int				ft_c_conv(t_flags flag, va_list lst);
int				ft_pp_conv();

int				ft_negative(int *negative, va_list lst, char **tab,
		int *word_len);
int				ft_d_conv(t_flags flag, va_list lst, int negative, int zeros);

int				ft_s_conv(t_flags flag, va_list lst);

char			ft_hexa(int num);
char			*ft_to_pointer(unsigned long num, int base);
int				ft_p_conv(t_flags flag, va_list lst);

char			ft_hexa1(int num);
char			*ft_to_mhexa(unsigned long num);
int				ft_neg2(va_list lst, int *negative, char **tab, int *word_len);
int				ft_x_conv(t_flags flag, va_list lst, int negative, int zeros);

char			ft_hexa2(int num);
char			*ft_to_bhexa(unsigned long num);
int				ft_neg3(va_list lst, int *negative, char **tab, int *word_len);
int				ft_xx_conv(t_flags flag, va_list lst, int negative, int zeros);

int				ft_u_conv(t_flags flag, va_list lst);

int				ft_error_check(t_flags flag, const char *chain);

#endif
