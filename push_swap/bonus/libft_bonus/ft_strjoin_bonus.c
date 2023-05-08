/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>			    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:32:20 by ablidi            #+#    #+#             */
/*   Updated: 2023/04/13 21:24:16 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

char	*ft_strjoin_bonus(char *s1, char *s2)
{
	char	*new_string;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return ((char *)s1);
	new_string = malloc(sizeof(char) * (ft_strlen(s1)
				+ ft_strlen(s2) + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		new_string[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_string[j++] = s2[i++];
	new_string[j] = '\0';
	free(s1);
	return (new_string);
}
