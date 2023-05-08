/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:42:24 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 22:57:25 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *st)
{
	int	swap;

	swap = st->stack_a[0];
	st->stack_a[0] = st->stack_a[1];
	st->stack_a[1] = swap;
	st->total_instr++;
	ft_putstr("sa\n");
}
