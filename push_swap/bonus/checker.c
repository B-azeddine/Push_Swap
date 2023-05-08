/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:08:32 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 22:41:23 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	send_to_get_instruction(void)
{
	ft_puterr("Error\n");
	exit(1);
}

static void	get_instruction(t_stack *stack, char *instr)
{
	if (ft_strequal_bonus(instr, "sa\n"))
		sa(stack);
	else if (ft_strequal_bonus(instr, "sb\n"))
		sb(stack);
	else if (ft_strequal_bonus(instr, "ss\n"))
		ss(stack);
	else if (ft_strequal_bonus(instr, "pa\n"))
		pa(stack);
	else if (ft_strequal_bonus(instr, "pb\n"))
		pb(stack);
	else if (ft_strequal_bonus(instr, "ra\n"))
		ra(stack);
	else if (ft_strequal_bonus(instr, "rb\n"))
		rb(stack);
	else if (ft_strequal_bonus(instr, "rr\n"))
		rr(stack);
	else if (ft_strequal_bonus(instr, "rra\n"))
		rra(stack);
	else if (ft_strequal_bonus(instr, "rrb\n"))
		rrb(stack);
	else if (ft_strequal_bonus(instr, "rrr\n"))
		rrr(stack);
	else
		send_to_get_instruction();
}

void	do_instruction(t_stack *stack)
{
	char	*instr;

	while (1)
	{
		instr = get_next_line(0);
		if (!instr)
			break ;
		get_instruction(stack, instr);
		free(instr);
	}
	free(instr);
	instr = NULL;
}

int	init_stack(t_stack *st)
{
	st->stack_a = malloc(sizeof(int) * st->a_size);
	if (!st->stack_a)
		return (1);
	st->stack_b = malloc(sizeof(int) * st->a_size);
	if (!st->stack_b)
		return (free(st->stack_a), 1);
	return (0);
}

int	main(int ac, char **av)
{
	t_arg	ag;
	t_stack	st;
	char	**str;
	char	*charall;

	(void)ac;
	init_bonus(&ag, &st);
	charall = parse_arg_bonus(&ag, &st, av);
	init_stack(&st);
	ag.j = 0;
	str = ft_split_bonus(charall, '\n');
	free(charall);
	a_bonus(&ag, str, &st);
	duplicate_bonus(&st);
	do_instruction(&st);
	if (is_sorted_bonus(st.stack_a, st.a_size) && st.b_size == 0)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free_stack(&st);
	return (0);
}
