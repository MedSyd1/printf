# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 15:39:03 by mmoufid           #+#    #+#              #
#    Updated: 2022/11/04 15:39:05 by mmoufid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

FILES = ft_printf.c ft_printf_utils.c ft_printf_putnb.c

CC = gcc

NAME = libftprintf.a

INCLUDEFILE = ft_printf.h

OBJECTFILES = ${FILES:.c=.o}

all : ${NAME}

${NAME} : ${OBJECTFILES}
	ar -rc ${NAME} ${OBJECTFILES}

%.o:%.c ${INCLUDEFILE}
	CC -c ${FLAGS} $<

clean :
	rm -rf ${OBJECTFILES}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY: clean fclean re all