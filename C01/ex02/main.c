/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:52:59 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/23 20:53:00 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 4;
	printf("a is %d\nb is %d\n", a, b);
	ft_swap(&a, &b);
	printf("a is %d\nb is %d", a, b);
	return (0);
}