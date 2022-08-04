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

SRC_FILE = ft_strchr.c ft_split.c ft_strtrim.c ft_bzero.c ft_strnstr.c ft_strmapi.c ft_isprint.c ft_atoi.c ft_strdup.c ft_tolower.c ft_toupper.c ft_substr.c ft_striteri.c ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c ft_itoa.c ft_memset.c ft_calloc.c ft_strlen.c ft_putchar_fd.c ft_isascii.c ft_strlcat.c ft_putendl_fd.c ft_memcmp.c ft_isdigit.c ft_strrchr.c ft_putstr_fd.c ft_isalpha.c ft_strncmp.c ft_isalnum.c ft_memcpy.c ft_memmove.c ft_strjoin.c

BONUS_SRC_FILE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_FILE = $(SRC_FILE:.c=.o)
BONUS_OBJ_FILE = $(BONUS_SRC_FILE:.c=.o)

CC = gcc
HEADER = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC_FILE)
	ar -rcs $(NAME) $(OBJ_FILE)

clean:
	@rm -rf $(OBJ_FILE)
	@echo "Removed all .o files"

fclean: clean
	@rm -f $(NAME)
	@echo "Removed all compiled components"

bonus: all
	@$(CC) $(CFLAGS) -c $(BONUS_SRC_FILE)
	ar -rcs $(NAME) $(BONUS_OBJ_FILE)

re: fclean all bonus

.PHONY: all clean fclean re