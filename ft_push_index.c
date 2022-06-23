/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:23 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 01:46:43 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_to_top(t_stack *stacks, int index)
{
	int	divid;

	divid = stacks->stack_a.sizeadd / 2;
	while (index != 0)
	{
		if (index <= divid)
		{
			ft_ra(&stacks->stack_a, OK);
			index--;
		}
		else
		{
			ft_rra(&stacks->stack_a, OK);
			index++;
			if (index == stacks->stack_a.sizeadd)
				break ;
		}
	}
}

int	ft_search_index(t_stack *stacks, int key_number)
{
	int	i;

	i = 0;
	while (i < stacks->stack_a.sizeadd)
	{
		if (stacks->stack_a.arry[i] <= key_number)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_push_index(t_stack *stacks, int key_number)
{
	int	index;

	index = ft_search_index(stacks, key_number);
	while (index != -1)
	{
		ft_move_to_top(stacks, index);
		ft_pb(stacks, OK);
		index = ft_search_index(stacks, key_number);
	}
}
