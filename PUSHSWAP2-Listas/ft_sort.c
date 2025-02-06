/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:53:16 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/06 16:35:23 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_ord(t_pile *sts)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = sts->a;
	if (sts->a->index != i)
		return ;
	while (sts->a != NULL)
	{
		if (sts->a->index != i)
		{
			sts->a = temp;
			return ;
		}
		else if (sts->a->index == i)
		{
			i++;
			sts->a = sts->a->next;
		}
	}
	sts->a = temp;
	ft_error("\n", 1);
}

void	ft_sort(t_pile *sts)
{
	check_ord(sts);
	if (sts->ia == 2)
		sa(sts);
	else if (sts->ia == 3)
		s_three(sts);
	else if (sts->ia == 4)
		s_four(sts);
	else if (sts->ia == 5)
		s_five(sts);
	else if (sts->ia == 6)
		s_six(sts);
	else if (sts->ia > 6)
	{
		printf("ENTER\n");
		ft_K_sort(sts);
	}
}
