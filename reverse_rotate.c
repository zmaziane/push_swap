/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:18:49 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/13 21:35:33 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear_first_elm(int *array, int sizeadd)
{
	while (sizeadd > 0)
	{
		array[sizeadd] = array[sizeadd - 1];
		sizeadd--;
	}
}

void	ft_rra(t_num *stack_a, int type)
{
	int	last_num;

	if (type)
		write(1, "rra\n", 4);
	last_num = stack_a->arry[stack_a->sizeadd - 1];
	ft_clear_first_elm(stack_a->arry, stack_a->sizeadd);
	stack_a->arry[0] = last_num;
}

void	ft_rrb(t_num *stack_b, int type)
{
	int	last_num;

	if (type)
		write(1, "rrb\n", 4);
	last_num = stack_b->arry[stack_b->sizeadd - 1];
	ft_clear_first_elm(stack_b->arry, stack_b->sizeadd);
	stack_b->arry[0] = last_num;
}

void	rra_and_rrb(t_stack *stack, int type)
{
	if (type)
		write(1, "rrr\n", 4);
	ft_rra(&stack->stack_a, KO);
	ft_rrb(&stack->stack_b, KO);
}
