/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:40:12 by ablidi            #+#    #+#             */
/*   Updated: 2023/05/07 20:55:37 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	a_size;
	int	b_size;
	int	total;
	int	total_instr;
	int	len;
}	t_stack;

typedef struct s_arg
{
	int	i;
	int	j;
	int	*tab;
}	t_arg;

int			ft_isdigit(char *c);
int			ft_strlen(char *s);
int			ft_putchar(char c);
int			find_max_elem(int *stack, int stack_len);
int			find_min_elem(int *stack, int stack_len);
int			is_sorted(int *stack, int len);
int			range_it(int min, int curr_rank, int range);
long		ft_atoi_v2(char *str, char **args, t_stack *st);
void		ft_putstr(char *str);
void		ft_puterr(char *str);
void		duplicate(t_stack *st);
void		d_quotes(char **charAll);
void		place_smallnum_first_a(t_stack *stack);
void		rank_stack(int *stack, int len);
void		sort_3(t_stack *st);
void		sort_4(t_stack *stack);
void		sort_5(t_stack *stack);
void		global_sort(t_stack *stack);
void		ra(t_stack *st);
void		rb(t_stack *st);
void		rr(t_stack *st);
void		rra(t_stack *st);
void		rrb(t_stack *st);
void		rrr(t_stack *st);
void		sa(t_stack *st);
void		sb(t_stack *st);
void		ss(t_stack *st);
void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		sort(t_stack *stack);
void		return_to_a(t_stack *stack);
void		send_to_return_to_a(t_stack *stack, int max);
void		free_args(char **args);
void		free_stack(t_stack *stack);
char		**ft_split(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strdup(char *s1);

#endif