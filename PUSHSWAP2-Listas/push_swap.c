/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 00:29:51 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/02/05 19:29:37 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	*stacks;
	t_list	*temp;
	int		*num;
	int		c;
	int		i;

	i = 0;
	c = count_elem(argv, ' ');
	stacks = init_pile(c, 0);
	num = ft_pars(argc, argv);
	stacks = int_cpy_to_lst(num, c, stacks);
	temp = stacks->a;
	while (stacks->a != NULL)
	{
		printf("numero de lista= %d\n", stacks->a->content);
		stacks->a = stacks->a->next;
	}
	stacks->a = temp;
	printf("pila a longitud= %d\n", stacks->ia);
	assig_index(stacks);
	ft_sort(stacks);
	i = 0;
	printf("pila b longitud= %d\n", stacks->ib);
	while (i < stacks->ib)
	{
		printf("pila a después de ordenar los sa = %d\n", stacks->b->content);
		stacks->b = stacks->b->next;
		i++;
	}
	return (0);
}
