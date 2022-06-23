/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find-biggest_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:49:19 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 01:49:31 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_biggest_index(t_num *stack_b)
{
	int	i;
	int	b_index;

	i = 0;
	b_index = i;
	while (i < stack_b->sizeadd)
	{
		if (stack_b->arry[b_index] < stack_b->arry[i])
			b_index = i;
		i++;
	}
	return (b_index);
}

void	ft_find_biggest_number(t_stack *stacks)
{
	int	b_index;

	b_index = ft_get_biggest_index(&stacks->stack_b);
	while (b_index != 0)
	{
		if (b_index <= (stacks->stack_b.sizeadd / 2))
			ft_rb(&stacks->stack_b, OK);
		else
			ft_rrb(&stacks->stack_b, OK);
		b_index = ft_get_biggest_index(&stacks->stack_b);
	}
}
