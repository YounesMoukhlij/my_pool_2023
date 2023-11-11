# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 22:46:30 by youmoukh          #+#    #+#              #
#    Updated: 2023/09/02 16:44:14 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror 
CC = cc
SRCS = srcs/ft_swap.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INC = includes
RC = ar rcs
NAME = libft.a
OBJ = ${SRCS:.c=.o}



.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o $@

${NAME}: ${OBJ}
		ar rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY:	clean all fclean re
