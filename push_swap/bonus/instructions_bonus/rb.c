/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:14:41 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 17:28:45 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rb(t_stack *st)
{
	int	i;
	int	tmp;

	if (st->b_size == 0)
		return ;
	i = 1;
	tmp = st->stack_b[0];
	while (i < st->b_size)
	{
		st->stack_b[i - 1] = st->stack_b[i];
		i++;
	}
	st->stack_b[i - 1] = tmp;
	st->total_instr++;
}
