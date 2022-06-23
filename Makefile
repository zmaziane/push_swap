# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 16:56:14 by zmaziane          #+#    #+#              #
#    Updated: 2022/04/17 00:07:26 by zmaziane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME1 = checker

SRC = 	check_argument.c \
		creat_stack.c \
		push_swap.c \
		reverse_rotate.c \
		sa_or_sb.c \
		sort_tree_numbers.c \
		split.c \
		utils.c \
		sort_five_numbers.c \
		rotate.c \
		push_a_or_b.c \
		sort_ten_numbers.c \
		ft_arrange_rest.c\
		ft_find_biggest_number.c\
		ft_find_key_number.c\
		ft_push_index.c\
		ft_sort_array.c\
		ft_arrange_one_hundred.c\
		ft_arrange_five_hundred.c \
		get_next_line.c\


CHECKRE_SRC =	checker.c\
				get_next_line.c\
				sa_or_sb.c \
				reverse_rotate.c \
				rotate.c \
				push_a_or_b.c \
				check_argument.c \
				creat_stack.c \
				utilis1.c \
				split.c \


OBJ = ${SRC:.c=.o}
OBJ_B = ${CHECKRE_SRC:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME): $(OBJ) push_swap.h
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "compilation is finished"


bonus : $(OBJ_B)
	@cc  $(CFLAGS) $(OBJ_B) -o $(NAME1)
	@echo "Executable file is ready"

clean :
		@rm -rf $(OBJ) 
		@rm -rf $(OBJ_B)
		@echo "clean .o"

fclean : clean
		@rm -rf $(NAME)
		@rm -rf $(NAME1)
		@echo "clean all"

re : fclean all bonus
