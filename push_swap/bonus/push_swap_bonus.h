/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:40:12 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 21:07:41 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include "./get_next_line/get_next_line.h"

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	a_size;
	int	b_size;
	int	total;
	int	print_stack;
	int	print_instr;
	int	total_instr;
	int	len;
}	t_stack;

typedef struct s_arg
{
	int	i;
	int	j;
	int	*tab;
}	t_arg;

int		ft_isdigit_bonus(char *c);
int		ft_strlen(char *s);
int		ft_putchar(char c);
int		is_sorted_bonus(int *stack, int len);
long	ft_atoi_bonus(char *str, char **args, t_stack *st);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
void	ra(t_stack *st);
void	rb(t_stack *st);
void	rr(t_stack *st);
void	rra(t_stack *st);
void	rrb(t_stack *st);
void	rrr(t_stack *st);
void	sa(t_stack *st);
void	sb(t_stack *st);
void	ss(t_stack *st);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	free_args(char **args);
void	free_stack(t_stack *stack);
void	duplicate_bonus(t_stack *st);
void	d_quotes_bonus(char **charAll);
char	**ft_split_bonus(char *s, char c);
char	*ft_strjoin_bonus(char *s1, char *s2);
char	*ft_strdup_bonus(char *s1);
char	*parse_arg_bonus(t_arg *ag, t_stack *st, char **av);
int		ft_strequal_bonus(char const *s1, char const *s2);
int		ft_strcmp_bonus(const char *s1, const char *s2);
void	init_bonus(t_arg *ag, t_stack *st);
void	a_bonus(t_arg *ag, char **str, t_stack *st);
char	*get_next_line(int fd);

#endif