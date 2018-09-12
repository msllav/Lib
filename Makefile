# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavui <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 12:31:57 by mavui             #+#    #+#              #
#    Updated: 2018/08/23 18:49:57 by mavui            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ_PATH = obj/

SRC_PATH = src/

SRC_NAME = ft_atoi.c \
	  ft_bzero.c \
	  ft_count_letters.c \
	  ft_count_words.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_islower.c \
	  ft_isprint.c \
	  ft_isspace.c \
	  ft_isupper.c \
	  ft_itoa.c \
	  ft_lstadd.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstnew.c \
	  ft_memalloc.c\
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memdel.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putnbr_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strdel.c \
	  ft_strdup.c \
	  ft_strequ.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strsplit.c \
	  ft_strstr.c \
	  ft_strsub.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  get_next_line.c

CPPFLAGS = -Iinclude

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

_GREEN = \033[32;1m
_RED = \033[31;1m
_YELLOW = \033[33;1m
_GRAS = \033[1m
_END = \033[0m

all : $(NAME)

$(NAME): $(OBJ)
	 @echo "$(_YELLOW)↺$(_END) Compilation in progress ..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(_GREEN)↳$(_END) Libft.a [ $(_GREEN)✓$(_END) ]"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@echo "$(_YELLOW)↺$(_END) Delete obj directory in progress ..."
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "$(_RED)✘$(_END) Obj [ $(_GREEN)✓$(_END) ]"

fclean: clean
	@echo "$(_YELLOW)↺$(_END) Delete Libft.a in progress ..."
	@rm -f $(NAME)
	@echo "$(_RED)✘$(_END) Libft.a [ $(_GREEN)✓$(_END) ]"

re: fclean all

.PHONY: all, clean, fclean, re
