/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 03:27:44 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 22:57:27 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack *st)
{
	int	swap;

	swap = st->stack_b[0];
	st->stack_b[0] = st->stack_b[1];
	st->stack_b[1] = swap;
	st->total_instr++;
	ft_putstr("sb\n");
}
