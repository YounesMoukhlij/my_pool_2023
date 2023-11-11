# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 14:13:03 by youmoukh          #+#    #+#              #
#    Updated: 2023/11/02 16:54:50 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_atoi.c 
	  ft_toupper.c ft_tolower.c ft_bzero.c  ft_strlen.c   ft_strlcat.c ft_strlcpy.c 
	  ft_strncmp.c ft_memmove.c ft_memcpy.c ft_strchr.c   ft_strrchr.c ft_memchr.c 
	  ft_strnstr.c ft_memset.c	ft_memcmp.c ft_calloc.c   ft_strdup.c  ft_strjoin.c 
	  ft_split.c   ft_substr.c ft_strtrim.c	ft_itoa.c	  ft_strmapi.c ft_striteri.c 
	  ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c  ft_putnbr_fd.c 

OBJ = ${SRC:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INC = libft.h

all : ${NAME}

.c.o :
	cc ${CFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all