# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 13:35:25 by youmoukh          #+#    #+#              #
#    Updated: 2023/09/06 11:37:54 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./ft_sub.c ./ft_putnbr.c ./ft_multi.c ./ft_modulo.c ./do-op.c ./ft_division.c ./ft_atoi.c ./ft_add.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = ${SRCS:.c=.o}
Fonc = do-op
RM = rm -f

all :
		${CC} ${CFLAGS} ${SRCS} -o ${Fonc}

clean :
		${RM} ${OBJ}
fclean :
		${RM} ${Fonc}

re : fclean all

.PHONY = all clean re
