/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:26:28 by luoguo            #+#    #+#             */
/*   Updated: 2025/02/03 22:33:27 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	fac;
	int	nb2;

	fac = 2;
	nb2 = nb / 2;
	while (fac <= nb2)
	{
		if (nb % fac == 0)
			return (ft_is_prime(nb + 1));
		fac++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	return (ft_is_prime(nb));
}

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(32));
// 	return (0);
// }
