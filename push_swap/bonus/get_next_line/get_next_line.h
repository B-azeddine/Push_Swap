/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:40:44 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 19:00:50 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "../push_swap_bonus.h"

char	*get_next_line(int fd);
char	*ft_cutnwline(char *save);
char	*ft_nwline(char *save);
char	*ft_strjoin_get(char *save, char *buf);
char	*ft_strnchr(char *str, char c);
int		ft_strlen_get(char *s);

#endif
