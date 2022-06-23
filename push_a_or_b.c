/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_or_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 00:01:40 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 00:01:57 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *stacks, int type)
{
	int	size_of_b;
	int	size_of_a;
	int	i;

	i = 0;
	size_of_b = stacks->stack_b.sizeadd;
	size_of_a = stacks->stack_a.sizeadd;
	if (size_of_b == 0)
		return ;
	if (type)
		write(1, "pa\n", 3);
	if (size_of_a == 0)
		stacks->stack_a.arry[0] = stacks->stack_b.arry[0];
	else
	{
		ft_clear_first_elm(stacks->stack_a.arry, size_of_a);
		stacks->stack_a.arry[0] = stacks->stack_b.arry[0];
	}
	ft_remove_first_elm(stacks->stack_b.arry, size_of_b);
	stacks->stack_a.sizeadd++;
	stacks->stack_b.sizeadd--;
}

void	ft_pb(t_stack *stacks, int type)
{
	int	size_of_b;
	int	size_of_a;
	int	i;

	i = 0;
	size_of_b = stacks->stack_b.sizeadd;
	size_of_a = stacks->stack_a.sizeadd;
	if (size_of_a == 0)
		return ;
	if (type)
		write(1, "pb\n", 3);
	if (size_of_b == 0)
		stacks->stack_b.arry[0] = stacks->stack_a.arry[0];
	else
	{
		ft_clear_first_elm(stacks->stack_b.arry, size_of_b);
		stacks->stack_b.arry[0] = stacks->stack_a.arry[0];
	}
	ft_remove_first_elm(stacks->stack_a.arry, size_of_a);
	stacks->stack_b.sizeadd++;
	stacks->stack_a.sizeadd--;
}
