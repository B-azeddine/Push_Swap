/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:22:16 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 22:57:17 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *st)
{
	int	i;
	int	tmp;

	if (st->a_size == 0)
		return ;
	i = st->a_size - 1;
	tmp = st->stack_a[i];
	while (i > 0)
	{
		st->stack_a[i] = st->stack_a[i - 1];
		i--;
	}
	st->stack_a[0] = tmp;
	st->total_instr++;
	ft_putstr("rra\n");
}
