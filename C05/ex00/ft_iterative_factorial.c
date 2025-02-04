/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:28:41 by luoguo            #+#    #+#             */
/*   Updated: 2025/02/03 21:32:58 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	new;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	new = nb - 1;
	while (new)
	{
		nb = new * nb;
		new--;
	}
	return (nb);
}

// #include <stdio.h>
// int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(-1));
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(4));
// 	return (0);
// }