/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:11:48 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/04 19:40:05 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	range_it(int min, int curr_rank, int range)
{
	int	max;

	max = 15;
	if (range > 100)
		max = 35;
	if (curr_rank <= min)
		return (0);
	else if (curr_rank <= max + min)
		return (1);
	else if (curr_rank > max + min)
		return (-1);
	return (11);
}

void	send_to_return_to_a(t_stack *stack, int max)
{
	while (max != 0)
	{
		rrb(stack);
		max++;
		if (max == stack->b_size)
			max = 0;
	}
	pa(stack);
}

void	return_to_a(t_stack *stack)
{
	int	max;

	while (stack->b_size != 0)
	{
		max = find_max_elem(stack->stack_b, stack->b_size);
		if (max > (stack->b_size / 2))
			send_to_return_to_a(stack, max);
		else if (max <= (stack->b_size / 2))
		{
			while (max != 0)
			{
				rb(stack);
				max--;
			}
			pa(stack);
		}
		else
			pa(stack);
	}
}
