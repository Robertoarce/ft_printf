# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarce <rarce@42.student.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 15:38:36 by rarce             #+#    #+#              #
#    Updated: 2020/09/10 13:01:54 by titorium         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT		=	./libft/libft.a
INCLUDES	=	-I./includes

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

SRCS		=	./src/ft_printf.c
SRCS		+=	./src/ft_outils.c
SRCS		+=	./src/ft_outils2.c
SRCS		+=	./src/ft_outils3.c
SRCS 		+=	./src/ft_conv_d.c
SRCS		+=	./src/ft_conv_c.c
SRCS 		+=	./src/ft_conv_p.c
SRCS 		+=	./src/ft_conv_pp.c
SRCS 		+=	./src/ft_conv_s.c
SRCS 		+=	./src/ft_conv_un.c
SRCS		+=	./src/ft_conv_x.c
SRCS		+=	./src/ft_conv_xx.c
SRCS		+=	./src/ft_flags.c

OBJS		=	${SRCS:.c=.o}

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
