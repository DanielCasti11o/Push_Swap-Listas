/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:52:57 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/03 21:30:39 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *msj, int n)
{
	int	i;

	i = 0;
	while (msj[i])
	{
		write (2, &msj[i], 1);
		i++;
	}
	exit(n);
}

int	count_elem(char **argv, char separator)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	j = 0;
	count = 0;
	if (!argv[i] || ft_strlen(argv[i]) == 0)
		ft_error("Error", 1);
	while (argv[i])
	{
		if (!argv[i][j] || (ft_strlen(argv[i]) == 0))
			ft_error("Error\n", 1);
		while (argv[i][j])
		{
			if ((argv[i][j] != separator && argv[i][j + 1] == separator)
			|| !argv[i][j + 1])
				++count;
			j++;
		}
		i++;
		j = 0;
	}
	return (count);
}

void	checknumb(char *str_arg, int *numb)
{
	int		i;
	long	num;

	i = 0;
	if (str_arg[i] == '-' || str_arg[i] == '+')
		i++;
	while (str_arg[i])
	{
		if (str_arg[i] > '9' || str_arg[i] < '0')
		{
			if (numb)
				free(numb);
			ft_error("Error\n", 1);
		}
		i++;
	}
	num = ft_atol(str_arg);
	if (num < -2147483648 || num > 2147483647)
	{
		if (numb)
			free(numb);
		ft_error("Error\n", 1);
	}
}

int	checkargs(char *str, int *num)
{
	int	numb;

	checknumb(str, num);
	numb = ft_atoi(str);
	// printf("The argument are valid!\n");
	return (numb);
}

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	res;

// 	i = 1;
// 	res = checkargs(argc, argv);
// 	return (0);
// }
