/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:37:59 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 22:57:20 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->b_size == 0)
		return ;
	i = stack->b_size - 1;
	tmp = stack->stack_b[i];
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
	stack->total_instr++;
	ft_putstr("rrb\n");
}
