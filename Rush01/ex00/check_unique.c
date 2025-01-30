/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_unique.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:47:25 by swied             #+#    #+#             */
/*   Updated: 2025/01/26 16:19:27 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	chk_unique(int **tab, int pstn, int num)
{
	int	i;

	i = 0;
	while (i < pstn / 4)
	{
		if (tab[i][pstn % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pstn % 4)
	{
		if (tab[pstn / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}
