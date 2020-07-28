# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/28 08:01:44 by cmarty            #+#    #+#              #
#    Updated: 2020/07/28 08:01:56 by cmarty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

includes_dir 	= includes

SRCS    = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCLUDES	= ${includes_dir}ft.h

CC 	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I${includes_dir} -c $< -o ${<:.c=.o}

NAME	 = libft.a

OBJS 	= ${SRCS:.c=.o}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	echo ${OBJS}
	${RM} ${OBJS}

fclean:	clean
	rm ${NAME}
