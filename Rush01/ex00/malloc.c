/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:09:33 by swied             #+#    #+#             */
/*   Updated: 2025/01/27 20:30:03 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**create_malloc(int rows, int cols)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = malloc(rows * sizeof(int *));
	while ( i< rows)
	{
		tab[i] = malloc(cols * sizeof(int));
		if (tab[i] == 0)
		{
			while (j < i)
			{
				free(tab[j]);
				j++;
			}
			free(tab);
			return (0);
		}
		i++;
	}
	return (tab);
}

void	free_memory(int **tab, int *entry)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (i < 4)
		{
			free(tab[i]);
			i++;
		}
		free(tab);
	}
	free(entry);
}
