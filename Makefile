#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clphilip <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 16:44:25 by clphilip          #+#    #+#              #
#    Updated: 2018/12/04 11:42:48 by clphilip         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
SRC = ft_itoa.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c\
ft_putnbr.c ft_putendl.c ft_strsplit.c ft_strtrim.c ft_strjoin.c ft_strjoin.c\
ft_strsub.c ft_strnequ.c ft_strequ.c ft_strmapi.c ft_strmap.c ft_striteri.c\
ft_striter.c ft_strclr.c ft_strdel.c ft_strnew.c ft_memdel.c ft_memalloc.c\
ft_putstr.c ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c\
 ft_isdigit.c ft_isalpha.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strchr.c\
 ft_memcmp.c ft_memchr.c ft_memmove.c ft_memccpy.c ft_memcpy.c ft_bzero.c\
ft_memset.c ft_strstr.c ft_strncpy.c ft_putchar.c ft_atoi.c ft_strlcat.c\
ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strncat.c ft_strdup.c\
ft_strlcat.c
OBJ = ft_itoa.o ft_putnbr_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putchar_fd.o\
ft_putnbr.o ft_putendl.o ft_strsplit.o ft_strtrim.o ft_strjoin.o ft_strjoin.o\
ft_strsub.o ft_strnequ.o ft_strequ.o ft_strmapi.o ft_strmap.o ft_striteri.o\
ft_striter.o ft_strclr.o ft_strdel.o ft_strnew.o ft_memdel.o ft_memalloc.o\
ft_putstr.o ft_tolower.o ft_toupper.o ft_isprint.o ft_isascii.o ft_isalnum.o\
 ft_isdigit.o ft_isalpha.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strchr.o\
 ft_memcmp.o ft_memchr.o ft_memmove.o ft_memccpy.o ft_memcpy.o ft_bzero.o\
ft_memset.o ft_strstr.o ft_strncpy.o ft_putchar.o ft_atoi.o ft_strlcat.o\
ft_strcat.o ft_strcmp.o ft_strcpy.o ft_strlen.o ft_strncat.o ft_strdup.o\
ft_strlcat.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c -I $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all