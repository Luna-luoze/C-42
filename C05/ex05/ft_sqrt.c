/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:28:24 by luoguo            #+#    #+#             */
/*   Updated: 2025/02/03 21:59:34 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	nb2;

	sqrt = 0;
	nb2 = nb / 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (sqrt <= nb2)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
