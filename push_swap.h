/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:17:03 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 02:02:47 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define OK 1
# define KO 0

typedef struct s_num
{
	int	size;
	int	*arry;
	int	sizeadd;
}				t_num;

typedef struct s_stack
{
	t_num	stack_a;
	t_num	stack_b;
}				t_stack;

char		*arg_to_string(char **av);
int			ft_error_free(t_stack *stack, char *message, int retur);
int			chech_arg(char *av);
t_stack		creat_stack(char *string);
char		**ft_stacks_init(char *string, t_stack *stacks);
int			ft_count_numbers(char *string);
int			ft_check_number(char *number);
int			ft_check_duplicates(t_stack *stacks, int number);
int			ft_check_sorted(t_num *array);
void		sa_or_sb(t_num *array, int type, char c);
void		sort_tree_nembers(t_num *stack);
void		ft_clear_first_elm(int *array, int sizeadd);
void		ft_rra(t_num *stack_a, int type);
void		ft_rrb(t_num *stack_b, int type);
void		rra_and_rrb(t_stack *stack, int type);
void		ft_sa_and_sb(t_stack *stack, int type);
void		ft_ra_and_rb(t_stack *stacks, int type);
void		ft_rb(t_num *stack_b, int type);
void		ft_ra(t_num *stack_a, int type);
void		ft_remove_first_elm(int *array, int used_size);
void		ft_pa(t_stack *stacks, int type);
void		ft_pb(t_stack *stacks, int type);
void		sort_five_nembers(t_stack *stacks);
void		ft_find_smallest_number(t_stack *stacks);
int			ft_get_smallest_index(t_num *stack_a);
void		sort_ten_nembers(t_stack *stack);
void		index_ten_numbers(t_stack *stack);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		**ft_split(char const *s, char c);
int			ft_isdigit(int c);
size_t		ft_strlen(const char *s);
long long	ft_atoi(const char *str);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_allocate(char **strs, const char *s, size_t n);
int			word_count(char const *s, char c);
void		ft_arrange_more_then_hundred(t_stack *stacks);
void		ft_arrange_five_hundred(t_stack *stacks);
int			*ft_sort_array(t_num *stack_a);
void		ft_arrange_rest(t_stack *stacks);
int			ft_find_key_number(int *sorted_list, int size, int divided, \
				int chunks);
void		ft_push_index(t_stack *stacks, int key_number);
void		ft_find_biggest_number(t_stack *stacks);
void		ft_arrange_one_hundred(t_stack *stacks);
int			*ft_save_list(t_num *stack_a);
void		ft_swap(int *left, int *right);
int			ft_search_index(t_stack *stacks, int key_number);
void		ft_move_to_top(t_stack *stacks, int index);
void		ft_arrange_rest_of_numbers(t_stack *stacks, int size);
int			ft_get_biggest_index(t_num *stack_b);
void		ft_check(char *line, t_stack *stacks);
int			ft_strcmp(char *s1, char *s2);
char		*get_next_line(int fd);
char		*ft_strdup(char *s);
void		ft_bzero(void *s, size_t n);
#endif
