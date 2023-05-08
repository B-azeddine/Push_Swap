/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:07:08 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 17:28:45 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ra(t_stack *st)
{
	int	i;
	int	tmp;

	if (st->a_size == 0)
		return ;
	i = 1;
	tmp = st->stack_a[0];
	while (i < st->a_size)
	{
		st->stack_a[i - 1] = st->stack_a[i];
		i++;
	}
	st->stack_a[i - 1] = tmp;
	st->total_instr++;
}
