/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:14 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/05 22:13:29 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <math.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct s_pile
{
	t_list	*a;
	t_list	*b;
	int		ia;
	int		ib;
}	t_pile;

int			ft_strlen(char *s);
int			intlen(int *arr);
int			ft_atoi(char *nptr);
long		ft_atol(char *nptr);
int			ft_lstsize(t_list *lst);
void		ft_error(char *msj, int n);
t_list		*ft_lstlast(t_list *lst);
char		**ft_split(char const *s, char c);
int			ft_strlcpy(char *dst, const char *src, size_t size);
void		ss(t_pile *sts);
void		sa(t_pile *sts);
void		sb(t_pile *sts);
void		pa(t_pile *sts);
void		pb(t_pile *sts);
void		ra(t_pile *sts);
void		rb(t_pile *sts);
void		rr(t_pile *sts);
void		rra(t_pile *sts);
void		rrb(t_pile *sts);
void		rrr(t_pile *sts);
void		checknumb(char *str_arg, int *num);
void		check_repeat(int *arr, int size);
int			checkargs(char *str, int *num);
void		ft_error(char *msj, int n);
int			count_elem(char **argv, char separator);
t_list		*init_lst(int size);
t_pile		*init_pile(int size_a, int size_b);
int			*ft_pars(int argc, char **argv);
t_pile		*int_cpy_to_lst(int *num, int size, t_pile *sts);
void		ft_index(int *sorted, t_pile *sta);
void		ins_sort(int *array, int size);
void		assig_index(t_pile *arr);
void		s_three(t_pile *stacks);
void		reverse_s_three(t_pile *stacks);
void		s_four(t_pile *stacks);
void		s_five(t_pile *stacks);
void		s_six(t_pile *stacks);
void		ft_sort(t_pile *sts);
void		check_ord(t_pile *sts);
int			ft_sqrt(int num);
void		push_to_b(t_pile *stacks);
void		ft_K_sort(t_pile *stacks);

#endif
