/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:16:07 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/17 00:01:52 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	stack;
	char	*string;

	ac--;
	if (ac != 0)
	{
		string = arg_to_string(av);
		stack = creat_stack(string);
		if (ft_check_sorted(&stack.stack_a))
			return (ft_error_free(&stack, NULL, 0));
		else if (stack.stack_a.size == 2)
			sa_or_sb(&stack.stack_a, OK, 'a');
		else if (stack.stack_a.size == 3)
			sort_tree_nembers(&stack.stack_a);
		else if (stack.stack_a.size == 5 || stack.stack_a.size == 4)
			sort_five_nembers(&stack);
		else if (stack.stack_a.size > 5 && stack.stack_a.size <= 10)
			sort_ten_nembers(&stack);
		else if (stack.stack_a.size > 10 || stack.stack_a.size <= 100)
			ft_arrange_one_hundred(&stack);
		else if (stack.stack_a.size > 100)
			ft_arrange_five_hundred(&stack);
		return (ft_error_free(&stack, NULL, 0));
	}
	return (0);
}
