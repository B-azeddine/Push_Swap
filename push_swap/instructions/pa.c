/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:12:19 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 15:23:04 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	i = stack->a_size;
	if (stack->b_size == 0)
		return ;
	while (i-- > 0)
		stack->stack_a[i + 1] = stack->stack_a[i];
	stack->stack_a[0] = stack->stack_b[0];
	i = 1;
	while (i <= stack->b_size - 1)
	{
		stack->stack_b[i - 1] = stack->stack_b[i];
		i++;
	}	
	stack->a_size++;
	stack->b_size--;
	stack->total_instr++;
	ft_putstr("pa\n");
}
