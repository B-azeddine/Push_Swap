/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 22:56:43 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 15:45:33 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stack *st)
{
	int	max_index;

	if (st->a_size == 1)
		return ;
	if (st->a_size == 2)
	{
		if (st->stack_a[0] > st->stack_a[1])
			sa(st);
		return ;
	}
	else if (st->a_size == 3)
	{
		max_index = find_max_elem(st->stack_a, st->a_size);
		if (max_index == 0)
			ra(st);
		if (max_index == 1)
			rra(st);
		if (st->stack_a[0] > st->stack_a[1])
			sa(st);
	}
}

void	sort_4(t_stack *stack)
{
	int	min_index;

	min_index = 0;
	if (stack->a_size == 4)
	{
		min_index = find_min_elem(stack->stack_a, stack->a_size);
		if (!is_sorted(stack->stack_a, stack->a_size))
		{
			if (min_index == 0)
			{
				pb(stack);
				sort_3(stack);
				pa(stack);
			}
			else
			{
				place_smallnum_first_a(stack);
				pb(stack);
				sort_3(stack);
				pa(stack);
			}
		}
	}
}

void	sort_5(t_stack *stack)
{
	int	min_index;

	min_index = 0;
	if (stack->a_size == 5)
	{
		min_index = find_min_elem(stack->stack_a, stack->a_size);
		if (!is_sorted(stack->stack_a, stack->a_size))
		{
			if (min_index == 0)
			{
				pb(stack);
				sort_4(stack);
				pa(stack);
			}
			else
			{
				place_smallnum_first_a(stack);
				pb(stack);
				sort_4(stack);
				pa(stack);
			}
		}
	}
}

void	global_sort(t_stack *stack)
{
	int	i;
	int	size_st;

	size_st = stack->len;
	i = 0;
	rank_stack((stack->stack_a), stack->a_size);
	while (stack->a_size)
	{
		if (range_it(i, (stack->stack_a[0]), size_st) == 0)
		{
			pb(stack);
			rb(stack);
			i++;
		}
		else if (range_it(i, (stack->stack_a[0]), size_st) == 1)
		{
			pb(stack);
			i++;
		}
		else if (range_it(i, (stack->stack_a[0]), size_st) == -1)
			ra(stack);
	}
	return_to_a(stack);
}

void	sort(t_stack *stack)
{
	if (is_sorted(stack->stack_a, stack->a_size)
		&& stack->b_size == 0 && stack->a_size > 1)
		return ;
	else if (stack->a_size <= 3)
		return (sort_3(stack));
	else if (stack->a_size == 4)
		return (sort_4(stack));
	else if (stack->a_size == 5)
		return (sort_5(stack));
	else
		return (global_sort(stack));
}
