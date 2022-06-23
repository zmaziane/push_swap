/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_rest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:47:41 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 01:48:02 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_arrange_rest_of_numbers(t_stack *stacks, int size)
{
	if (!ft_check_sorted(&stacks->stack_a))
	{
		while (stacks->stack_a.sizeadd >= 5)
		{
			index_ten_numbers(stacks);
			ft_pb(stacks, OK);
		}
		sort_five_nembers(stacks);
		while (stacks->stack_a.sizeadd != size)
			ft_pa(stacks, OK);
	}
}

void	ft_arrange_rest(t_stack *stacks)
{
	if (stacks->stack_a.sizeadd == 2)
	{
		if (!ft_check_sorted(&stacks->stack_a))
			sa_or_sb(&stacks->stack_a, OK, 'a');
	}
	if (stacks->stack_a.sizeadd == 3)
		sort_tree_nembers(&stacks->stack_a);
	if (stacks->stack_a.sizeadd == 5 || stacks->stack_a.sizeadd == 4)
		sort_five_nembers(stacks);
	if (stacks->stack_a.sizeadd > 5)
		ft_arrange_rest_of_numbers(stacks, stacks->stack_a.sizeadd);
}
