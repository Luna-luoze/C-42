/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:26:19 by swied             #+#    #+#             */
/*   Updated: 2025/01/27 17:39:27 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	solve(int **tab, int entry[16], int pos)
{
	int	size;

	size = 1;
	if (pos == 16)
		return (1);
	while (size <= 4)
	{
		if (chk_unique(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check_visible(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
		size++;
	}
	return (0);
}

void	display_solution(int **tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	check_input(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (!(tab))
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = ft_atoi(str + i);
			j++;
		}
		i++;
		printif("input:%d",tab[j])
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	**tab;
	int	*entry;
	int	rows;
	int	cols;

	rows = 4;
	cols = 4;
	if (check_input(ac, av) == 1)
	{
		ft_putstr("Error1\n");
		return (0);
	}
	tab = create_malloc(rows, cols);
	entry = get_numbers(av[1]);
	if (solve(tab, entry, 0) == 1)
	{
		display_solution(tab);
	}
	else
	{
		ft_putstr("Error2\n");
	}
	free_memory(tab, entry);
	return (0);
}
