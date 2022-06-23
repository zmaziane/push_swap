/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_five_hundred.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:54:01 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/17 00:06:27 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_arrange_more_then_handred(t_stack *stacks)
{
	if (stacks->stack_a.sizeadd == 2)
	{
		if (!ft_check_sorted(&stacks->stack_a))
			sa_or_sb(&stacks->stack_a, OK, 'a');
	}
	else if (stacks->stack_a.sizeadd == 3)
		sort_tree_nembers(&stacks->stack_a);
	else if (stacks->stack_a.sizeadd == 5 || stacks->stack_a.sizeadd == 4)
		sort_five_nembers(stacks);
	else if (stacks->stack_a.sizeadd > 5 && stacks->stack_a.sizeadd <= 10)
		ft_arrange_rest_of_numbers(stacks, stacks->stack_a.sizeadd);
	else if (stacks->stack_a.sizeadd > 10)
		ft_arrange_one_hundred(stacks);
}

void	ft_arrange_five_hundred(t_stack *stacks)
{
	int	i;
	int	key_number;
	int	*sorted_list;

	i = 1;
	sorted_list = ft_sort_array(&stacks->stack_a);
	while (i != 8)
	{
		key_number = ft_find_key_number(sorted_list,
				stacks->stack_a.size, i, 8);
		ft_push_index(stacks, key_number);
		i++;
	}
	free (sorted_list);
	ft_arrange_more_then_handred(stacks);
	while (stacks->stack_b.sizeadd != 0)
	{
		ft_find_biggest_number(stacks);
		ft_pa(stacks, OK);
	}
}
