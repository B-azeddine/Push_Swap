/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 00:53:43 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/06 22:55:37 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_temp_arr(int len, int *temp, int swap)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	swap = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (temp[i] < temp[j])
			{
				swap = temp[i];
				temp[i] = temp[j];
				temp[j] = swap;
			}
			j++;
		}
		i++;
	}
}

void	rank(int len, int *temp, int *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (stack[i] == temp[j])
			{
				stack[i] = len - j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	rank_stack(int *stack, int len)
{
	int	*temp;
	int	i;
	int	swap;

	i = 0;
	swap = 0;
	temp = malloc(sizeof(int) * len);
	if (!temp)
		return ;
	while (i < len)
	{
		temp[i] = stack[i];
		i++;
	}
	i = 0;
	sort_temp_arr(len, temp, swap);
	i = 0;
	rank(len, temp, stack);
	free(temp);
}
