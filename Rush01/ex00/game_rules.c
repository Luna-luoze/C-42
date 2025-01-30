/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swied <swied@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:34:47 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/26 15:48:54 by swied            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	chk_vsbl_colup(int **tab, int pstn, int cnstr[16])
{
	int	i;
	int	highest;
	int	seen;

	i = 0;
	highest = 0;
	seen = 0;
	if (pstn / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pstn % 4] > highest)
			{
				highest = tab[i][pstn % 4];
				seen++;
			}
			i++;
		}
		if (cnstr[pstn % 4] != seen)
			return (1);
	}
	return (0);
}

int	chk_vsbl_coldn(int **tab, int pstn, int cnstr[16])
{
	int	i;
	int	highest;
	int	seen;

	i = 3;
	highest = 0;
	seen = 0;
	if (pstn / 4 == 3)
	{
		while (i > -1)
		{
			if (tab[i][pstn % 4] > highest)
			{
				highest = tab[i][pstn % 4];
				seen++;
			}
			i--;
		}
		if (cnstr[4 + pstn % 4] != seen)
			return (1);
	}
	return (0);
}

int	chk_vsbl_rowlf(int **tab, int pstn, int cnstr[16])
{
	int	i;
	int	highest;
	int	seen;

	i = 0;
	highest = 0;
	seen = 0;
	if (pstn % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pstn / 4][i] > highest)
			{
				highest = tab[pstn / 4][i];
				seen++;
			}
			i++;
		}
		if (cnstr[8 + pstn / 4] != seen)
			return (1);
	}
	return (0);
}

int	chk_vsbl_rowrt(int **tab, int pstn, int cnstr[16])
{
	int	i;
	int	highest;
	int	seen;

	i = 3;
	highest = 0;
	seen = 0;
	if (pstn % 4 == 3)
	{
		while (i > -1)
		{
			if (tab[pstn / 4][i] > highest)
			{
				highest = tab[pstn / 4][i];
				seen++;
			}
			i--;
		}
		if (cnstr[12 + pstn / 4] != seen)
			return (1);
	}
	return (0);
}

int	check_visible(int **tab, int pstn, int cnstr[16])
{
	if (chk_vsbl_rowrt(tab, pstn, cnstr))
		return (1);
	if (chk_vsbl_rowlf(tab, pstn, cnstr))
		return (1);
	if (chk_vsbl_coldn(tab, pstn, cnstr))
		return (1);
	if (chk_vsbl_colup(tab, pstn, cnstr))
		return (1);
	return (0);
}
