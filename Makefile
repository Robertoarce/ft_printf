# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarce <rarce@42.student.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 15:38:36 by rarce             #+#    #+#              #
#    Updated: 2020/08/24 10:47:55 by titorium         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	libftprintf.a

LIBFT		=	./libft/libft.a
INCLUDES	=	./includes
LB_INCLUDES	=	./libft

AR			=	ar -rcs
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

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

PATHSRC		=	./src

vpath %.c $(PATHSRC)

BUILDIR		=	obsj/

OBJS		=	$(patsubst %.c,$(BUILDIR)%.o,$(SRC))

all:	${NAME}

$(NAME):	${BUILDIR}	${OBJS} ${LIBFT}
	$(AR) $@ $(OBJS) libft.a

$(BUILDIR):
	mkdir $@

$(OBJS): $(BUILDIR)%.o:%.c
	${CC} ${CFLAGS} -I ${INCLUDES} -I ${LB_INCLUDES}	-g -c	$< -o $@

$(LIBFT):
	cd libft && make
	cp ./libft/libft.a .

clean:
	make clean -C ./libft
	${RM} libft.a
	${RM} -rf ${OBJS} ${BUILDIR}

fclean: clean
	make fclean -C ./libft
	${RM} ${NAME} ${BUILDIR}

re:	fclean all

.PHONY : all clean fclean re



