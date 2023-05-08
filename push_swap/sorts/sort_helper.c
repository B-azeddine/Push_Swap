/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:38:40 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 15:14:04 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max_elem(int *stack, int stack_len)
{
	int	i;
	int	tmp;
	int	index;

	if (stack_len == 0)
		return (-1);
	i = 0;
	index = 0;
	tmp = stack[i];
	while (i < stack_len)
	{
		if (tmp < stack[i])
		{
			tmp = stack[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	find_min_elem(int *stack, int stack_len)
{
	int	tmp;
	int	index;
	int	i;

	if (stack_len == 0)
		return (-1);
	i = 0;
	index = 0;
	tmp = stack[i];
	while (i < stack_len)
	{
		if (tmp > stack[i])
		{
			tmp = stack[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	place_smallnum_first_a(t_stack *stack)
{
	int	min_index;

	min_index = find_min_elem(stack->stack_a, stack->a_size);
	if (min_index <= stack->a_size / 2)
	{
		while (min_index)
		{
			ra(stack);
			min_index--;
		}
	}
	else
	{
		while ((stack->a_size - min_index) > 0)
		{
			rra(stack);
			min_index++;
		}
	}
}
