/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:16:26 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/06 16:34:33 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_pile *sts)
{
	t_list	*first;
	t_list	*last;

	if (!sts || !sts->a || !sts->a->next || sts->ia < 2)
		return ;
	first = sts->a;
	last = ft_lstlast(sts->a);
	sts->a = sts->a->next;
	last->next = first;
	first->next = NULL;
	write (1, "ra\n", 3);
}

void	rb(t_pile *sts)
{
	t_list	*first;
	t_list	*last;

	if (!sts || !sts->b || !sts->b->next || sts->ib < 2)
		return ;
	first = sts->b;
	last = ft_lstlast(sts->b);
	sts->b = sts->b->next;
	last->next = first;
	first->next = NULL;
	write (1, "rb\n", 3);
}

void	rr(t_pile *sts)
{
	ra(sts);
	rb(sts);
	write (1, "rr\n", 1);
}
