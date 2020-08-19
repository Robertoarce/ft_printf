# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarce <rarce@42.student.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 15:38:36 by rarce             #+#    #+#              #
#    Updated: 2020/08/19 17:38:16 by titorium         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libftprintf.a

LIBFT		=	./libft/libft.a
INCLUDES	=	./includes

CC			=	clang
CFLAGS		=	-Wall -Wextra -Werror -fPIC
AR			=	ar -rcs

SRC		=	ft_printf.c
SRC			+=	ft_outils.c
SRC			+=	ft_outils2.c
SRC 		+=	ft_conv_d.c
SRC			+=	ft_conv_c.c
SRC	 		+=	ft_conv_p.c
SRC 		+=	ft_conv_s.c
SRC 		+=	ft_conv_un.c
SRC			+=	ft_conv_x.c
SRC			+=	ft_conv_xx.c
SRC			+=	ft_error.c
SRC			+=	ft_flags.c

PATHSRC		= ./src


vpath %.c $(PATHSRC)

BUILDIR		= 	objs/

OBJS		=	$(patsubst %.c,$(BUILDIR)%.o,$(SRC))

all:	${NAME}
	

$(NAME):	$(BUILDIR)	$(OBJS) 
	cd libft && make
	cp ./libft/libft.a  .
	$(AR) $@ $(OBJS) libft.a

$(BUILDIR): 
	mkdir $@

$(OBJS): $(BUILDIR)%.o:%.c
	${CC} ${CFLAGS} -I $(INCLUDES) -g -c $< -o $@

clean:
	make clean -C ./libft
	${RM} -rf ${BUILDIR}

fclean: clean
	make fclean -C ./libft
	${RM}  ${NAME}

re:	fclean all

.PHONY : all clean fclean re


