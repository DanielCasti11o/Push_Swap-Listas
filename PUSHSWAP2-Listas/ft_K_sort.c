/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_K_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:19:46 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/06 16:33:40 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_pile *stacks)
{
	int	range;
	int	value;
	int	len;

	len = stacks->ia;
	range = ft_sqrt(stacks->ia) * 1.33;
	value = ft_lstsize(stacks->a);
	printf("longitud realg4life %d\n", value);
	while (stacks->a)
	{
		if (len == stacks->ib)
			break ;
		if (stacks->a->index <= stacks->ib)
		{
			pb(stacks);
		}
		else if (stacks->a->index <= stacks->ib + range)
		{
			pb(stacks);
			if (!((stacks->a->index <= stacks->ib + range)))
				rr(stacks);
			else
				rb(stacks);
		}
		else
			ra(stacks);
		printf("TOP %d\n", stacks->b->content);
	}
}

void	ft_K_sort(t_pile *stacks)
{
	push_to_b(stacks);
}
