/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:39:53 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 20:53:54 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_arg *ag, t_stack *st)
{
	ag->i = 1;
	st->len = 0;
	st->a_size = 0;
	st->b_size = 0;
}

void	exit_if_not_digit(char *c, char *charall, char **str)
{
	if (!ft_isdigit(c))
	{
		ft_puterr("Error\n");
		free(charall);
		free_args(str);
		exit(1);
	}
}

char	*parse_arg(t_arg *ag, t_stack *st, char **av)
{
	char	*charall;
	char	**str;
	char	*arg;

	d_quotes(av);
	charall = ft_strdup("");
	while (av[ag->i])
	{
		str = ft_split(av[ag->i], ' ');
		ag->j = 0;
		while (str[ag->j])
		{
			exit_if_not_digit(str[ag->j], charall, str);
			arg = ft_strjoin(charall, str[ag->j]);
			charall = ft_strjoin(arg, "\n");
			ag->j++;
			st->len++;
			st->a_size++;
		}
		free_args(str);
		ag->i++;
	}
	return (charall);
}

void	a(t_arg *ag, char **str, t_stack	*st)
{
	while (str[ag->j])
	{
		if ((ft_atoi_v2(str[ag->j], str, st) < INT_MIN
				|| ft_atoi_v2(str[ag->j], str, st) > INT_MAX))
		{
			ft_puterr("Error\n");
			free_args(str);
			free_stack(st);
			exit(1);
		}
		st->stack_a[ag->j] = ft_atoi_v2(str[ag->j], str, st);
		ag->j++;
	}
}

int	main(int ac, char **av)
{
	t_arg	ag;
	t_stack	st;
	char	**str;
	char	*charall;

	(void)ac;
	init(&ag, &st);
	charall = parse_arg(&ag, &st, av);
	ag.j = 0;
	st.stack_a = malloc(sizeof(int) * st.a_size);
	if (!st.stack_a)
		return (1);
	st.stack_b = malloc(sizeof(int) * st.a_size);
	if (!st.stack_b)
		return (free(st.stack_a), 1);
	str = ft_split(charall, '\n');
	free(charall);
	a(&ag, str, &st);
	duplicate(&st);
	sort(&st);
	free_args(str);
	free_stack(&st);
	return (0);
}
