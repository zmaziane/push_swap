/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 23:29:34 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/11 17:53:20 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicates(t_stack *stacks, int number)
{
	int	size;
	int	i;

	i = 0;
	size = stacks->stack_a.sizeadd;
	if (size == 0)
		return (1);
	while (i < size)
	{
		if (stacks->stack_a.arry[i] == number)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_number(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '-')
		i++;
	while (number[i])
	{
		if (!ft_isdigit(number[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_numbers(char *string)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (string[i])
	{
		if (string[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

char	**ft_stack_init(char *string, t_stack *stacks)
{
	int		size;
	char	**numbers;

	numbers = ft_split(string, ' ');
	size = ft_count_numbers(string);
	stacks->stack_a.arry = (int *)malloc(sizeof(int) * size);
	stacks->stack_b.arry = (int *)malloc(sizeof(int) * size);
	if (!stacks->stack_a.arry || !stacks->stack_b.arry)
		exit(1);
	stacks->stack_a.size = size;
	stacks->stack_b.size = size;
	stacks->stack_a.sizeadd = 0;
	stacks->stack_b.sizeadd = 0;
	free(string);
	return (numbers);
}

t_stack	creat_stack(char *str)
{
	t_stack		stacks;
	char		**numbers;
	long long	number;
	int			i;

	i = 0;
	numbers = ft_stack_init(str, &stacks);
	while (numbers[i])
	{
		if (!ft_check_number(numbers[i]))
			exit(ft_error_free(&stacks, "Error", 0));
		number = ft_atoi(numbers[i]);
		if (number < -2147483648 || number > 2147483647)
			exit(ft_error_free(&stacks, "Error", 0));
		if (!ft_check_duplicates(&stacks, number))
			exit(ft_error_free(&stacks, "Error", 0));
		stacks.stack_a.arry[i] = number;
		stacks.stack_a.sizeadd++;
		free(numbers[i]);
		i++;
	}
	free(numbers);
	return (stacks);
}
