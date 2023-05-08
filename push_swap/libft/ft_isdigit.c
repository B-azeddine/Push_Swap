/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi	<ablidi@student.42.fr>				+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:15:43 by ablidi            #+#    #+#             */
/*   Updated: 2023/04/16 01:19:30 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	if ((c[i] >= '0' && c[i] <= '9') || c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '+' || c[i] == '-')
		{
			if (!ft_isdigit(&c[i + 1]))
			{
				ft_puterr("Error\n");
				exit(1);
			}
		}
		i++;
	}
	else
		return (0);
	return (1);
}

void	duplicate(t_stack *st)
{
	int	i;
	int	j;

	i = 0;
	while (i <= st->len)
	{
		j = i + 1;
		while (j < st->len)
		{
			if (st->stack_a[i] == st->stack_a[j])
			{
				ft_puterr("Error\n");
				free_stack(st);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	d_quotes(char **charAll)
{
	int	i;
	int	j;

	i = 1;
	while (charAll[i])
	{
		j = 0;
		while (charAll[i][j] == ' ')
			j++;
		if (charAll[i][j] == '\0')
		{
			ft_puterr("Error\n");
			exit(1);
		}
		i++;
	}
}
