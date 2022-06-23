/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_one_hundred.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:42:42 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 02:00:07 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_arrange_one_hundred(t_stack *stacks)
{
	unsigned int	i;
	int				key_number;
	int				*sorted_list;

	i = 1;
	sorted_list = ft_sort_array(&stacks->stack_a);
	while (i != 4)
	{
		key_number = ft_find_key_number(sorted_list,
				stacks->stack_a.size, i, 4);
		ft_push_index(stacks, key_number);
		i++;
	}
	free (sorted_list);
	ft_arrange_rest(stacks);
	while (stacks->stack_b.sizeadd != 0)
	{
		ft_find_biggest_number(stacks);
		ft_pa(stacks, OK);
	}
}
