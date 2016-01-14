# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 19:03:06 by clagreou          #+#    #+#              #
#    Updated: 2015/12/05 14:02:02 by clagreou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = ./
HDR_DIR = ./

SRC_NAME = memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy strncpy strcat strncat strlcat strchr strrchr strstr strnstr strcmp strncmp atoi isalpha isdigit isalnum isascii isprint toupper tolower memalloc memdel strnew strdel strclr striter striteri strmap strmapi strequ strnequ strsub strjoin strtrim strsplit itoa putchar putstr putendl putnbr putchar_fd putstr_fd putendl_fd putnbr_fd lstnew lstdelone lstdel lstadd lstiter lstmap lstsize lstlast lstmerge lstat lstreverse isspace
SRC = $(addprefix ft_,$(SRC_NAME))

C_SRC = $(addsuffix .c,$(SRC))
O_SRC = $(addsuffix .o,$(SRC))

CC = gcc
CFLAGS = -Werror -Wall -Wextra
LDFLAGS =

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(HDR_DIR) -c $(addprefix $(SRC_DIR),$(C_SRC))
	ar rc $@ $(O_SRC)
	ranlib $@

clean:
	/bin/rm -f $(O_SRC)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
