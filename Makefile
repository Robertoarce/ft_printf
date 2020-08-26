# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarce <rarce@42.student.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 15:38:36 by rarce             #+#    #+#              #
#    Updated: 2020/08/26 17:58:47 by titorium         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT		=	./libft/libft.a
INCLUDES	=	-I./includes

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

SRC		=	./src/ft_printf.c
SRC			+=	./src/ft_outils.c
SRC			+=	./src/ft_outils2.c
SRC 		+=	./src/ft_conv_d.c
SRC			+=	./src/ft_conv_c.c
SRC	 		+=	./src/ft_conv_p.c
SRC	 		+=	./src/ft_conv_pp.c
SRC 		+=	./src/ft_conv_s.c
SRC 		+=	./src/ft_conv_un.c
SRC			+=	./src/ft_conv_x.c
SRC			+=	./src/ft_conv_xx.c
SRC			+=	./src/ft_error.c
SRC			+=	./src/ft_flags.c

OBJS		=	${SRC:.c=.o}

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} $(INCLUDES) -g -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	make -C ./libft
	cp libft/libft.a ./$(NAME)
	ar -rcs $(NAME) $(OBJS)

clean:
	make clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	make fclean -C ./libft
	${RM} ${NAME}

re:	fclean all

.PHONY : all clean fclean re

