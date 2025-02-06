# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/27 17:07:22 by dacastil          #+#    #+#              #
#    Updated: 2025/02/04 18:28:18 by dacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
AR = ar rcs
RM = rm -f
NAME = push_swap.a
EXEC = push_swap
SRC = utils_libft.c ft_atol.c ft_split.c inits.c \
		checkargs.c checkrepeat.c parseo.c insert_to_list.c \
			sort_to_index.c push.c rotate.c swaps.c reverse_rotate.c \
				minor_algorithm.c sqrt.c ft_K_sort.c ft_sort push_swap.c

OBJ = $(SRC:.c=.o)

all = $(NAME) $(EXEC)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(EXEC) : $(OBJ) $(NAME)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) -l $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
