/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:07:49 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 02:03:22 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tree_nembers(t_num *stack)
{
	if (stack->arry[0] > stack->arry[1])
		sa_or_sb(stack, OK, 'a');
	if (!ft_check_sorted(stack))
		ft_rra(stack, OK);
	if (stack->arry[0] > stack->arry[1])
		sa_or_sb(stack, OK, 'a');
}
