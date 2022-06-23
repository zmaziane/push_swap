/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:58:05 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/11 17:16:06 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_isdigit(av[i]))
			return (1);
		i++;
	}	
	return (0);
}

int	ft_error_free(t_stack *stack, char *message, int retur)
{
	if (stack)
	{
		if (stack->stack_a.arry)
			free(stack->stack_a.arry);
		if (stack->stack_b.arry)
			free(stack->stack_b.arry);
	}
	if (message != NULL)
		write(1, "Error\n", 6);
	return (retur);
}

char	*arg_to_string(char **av)
{
	char	*str;
	char	*tmp;
	int		i;

	i = 1;
	str = (char *)malloc(1);
	if (!str)
		exit (1);
	while (av[i])
	{
		if (!check_arg(av[i]))
			exit (1);
		else
		{
			tmp = ft_strjoin(str, av[i]);
			free(str);
			str = ft_strjoin(tmp, " ");
			free(tmp);
			i++;
		}
	}
	return (str);
}

int	ft_check_sorted(t_num *array)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = array->arry;
	while (i < array->sizeadd - 1)
	{
		if (tmp[i] > tmp[i + 1])
			return (0);
		i++;
	}
	return (1);
}
