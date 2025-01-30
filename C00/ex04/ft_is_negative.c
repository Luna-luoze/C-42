/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:10:06 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/23 16:04:18 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	sign = 'P';
	if (n >= 0)
	{
		write(1, &sign, 1);
	}
	if (n < 0)
	{
		sign = 'N';
		write(1, &sign, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-99);
// 	return (0);
// }
