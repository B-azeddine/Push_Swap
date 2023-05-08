/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:33:27 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 20:51:47 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (stack[i] < stack[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

void	free_stack(t_stack *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
}

void	free_args(char **args)
{	
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}
