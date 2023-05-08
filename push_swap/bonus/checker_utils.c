/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:24:36 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 21:17:05 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	init_bonus(t_arg *ag, t_stack *st)
{
	ag->i = 1;
	st->len = 0;
	st->a_size = 0;
	st->b_size = 0;
}

void	exit_if_not_digit_bonus(char *c, char *charall, char **str)
{
	if (!ft_isdigit_bonus(c))
	{
		ft_puterr("Error\n");
		free(charall);
		free_args(str);
		exit(1);
	}
}

char	*parse_arg_bonus(t_arg *ag, t_stack *st, char **av)
{
	char	*charall;
	char	**str;
	char	*arg;

	d_quotes_bonus(av);
	charall = ft_strdup_bonus("");
	while (av[ag->i])
	{
		str = ft_split_bonus(av[ag->i], ' ');
		ag->j = 0;
		while (str[ag->j])
		{
			exit_if_not_digit_bonus(str[ag->j], charall, str);
			arg = ft_strjoin_bonus(charall, str[ag->j]);
			charall = ft_strjoin_bonus(arg, "\n");
			ag->j++;
			st->len++;
			st->a_size++;
		}
		free_args(str);
		ag->i++;
	}
	return (charall);
}

void	a_bonus(t_arg *ag, char **str, t_stack	*st)
{
	while (str[ag->j])
	{
		if ((ft_atoi_bonus(str[ag->j], str, st) < INT_MIN
				|| ft_atoi_bonus(str[ag->j], str, st) > INT_MAX))
		{
			ft_puterr("Error\n");
			free_args(str);
			free_stack(st);
			exit(1);
		}
		st->stack_a[ag->j] = ft_atoi_bonus(str[ag->j], str, st);
		ag->j++;
	}
}
