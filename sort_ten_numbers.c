/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:53:48 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 01:53:58 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_ten_numbers(t_stack *stack)
{
	int	index;

	index = ft_get_smallest_index(&stack->stack_a);
	while (index != 0)
	{
		if (index <= 5)
			ft_ra(&stack->stack_a, OK);
		else
			ft_rra(&stack->stack_a, OK);
		index = ft_get_smallest_index(&stack->stack_a);
	}
}

void	sort_ten_nembers(t_stack *stack)
{
	if (!ft_check_sorted(&stack->stack_a))
	{
		while (stack->stack_a.sizeadd != 5)
		{
			index_ten_numbers(stack);
			ft_pb(stack, OK);
		}
		sort_five_nembers(stack);
		while (stack->stack_a.sizeadd != stack->stack_a.size)
			ft_pa(stack, OK);
	}
}
