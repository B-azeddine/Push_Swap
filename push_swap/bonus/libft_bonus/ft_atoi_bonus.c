/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>			    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:52:02 by ablidi            #+#    #+#             */
/*   Updated: 2023/04/15 20:02:52 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static void	handle_signe(char c, int *mark, int *i)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			*mark = -1;
		(*i)++;
	}
}

long	ft_atoi_bonus(char *str, char **args, t_stack *st)
{
	int		mark;
	long	result;
	int		i;

	i = 0;
	result = 0;
	mark = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	handle_signe(str[i], &mark, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	if (str[i])
	{
		ft_puterr("Error\n");
		free_args(args);
		free_stack(st);
		exit(1);
	}
	return (result * mark);
}
