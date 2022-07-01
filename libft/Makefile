# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 05:30:46 by ndejsong          #+#    #+#              #
#    Updated: 2022/07/01 11:07:12 by ndejsong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_FILE = ft_strlcat.c \
			ft_strlen.c

OBJ_FILE = $(SRC_FILE:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC_FILE)
	ar -rcs $(NAME) $(OBJ_FILE)

clean:
	rm -rf $(OBJ_FILE)

fclean: clean
	rm -f $(NAME)