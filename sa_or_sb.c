/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_or_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:06:22 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/13 21:18:14 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_or_sb(t_num *array, int type, char c)
{
	int	tmp;

	if (type && c == 'a')
		write(1, "sa\n", 3);
	else if (type && c == 'b')
		write(1, "sb\n", 3);
	if (array->sizeadd > 1)
	{
		tmp = array->arry[0];
		array->arry[0] = array->arry[1];
		array->arry[1] = tmp;
	}
}

void	ft_sa_and_sb(t_stack *stack, int type)
{
	if (type)
		write(1, "ss\n", 3);
	sa_or_sb(&stack->stack_a, KO, 'a');
	sa_or_sb(&stack->stack_b, KO, 'b');
}
