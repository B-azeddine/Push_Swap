/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:12:15 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 15:22:31 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	pb(t_stack *stack)
{
	int	i;

	if (stack->a_size == 0)
		return ;
	i = stack->b_size;
	while (i-- > 0)
		stack->stack_b[i +1] = stack->stack_b[i];
	stack->stack_b[0] = stack->stack_a[0];
	i = 1;
	while (i <= stack->a_size - 1)
	{
		stack->stack_a[i - 1] = stack->stack_a[i];
		i++;
	}
	stack->b_size++;
	stack->a_size--;
	stack->total_instr++;
}
