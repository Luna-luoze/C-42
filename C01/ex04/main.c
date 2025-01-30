/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:53:05 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/23 20:53:48 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	quo;
	int	rmdr;

	quo = -10;
	rmdr = 5;
	ft_ultimate_div_mod(&quo, &rmdr);
	printf("quotient is %d\nremainder is %d\n", quo, rmdr);//are c and d are expected answer here?
	// printf("the address for div is %p\nthe address for mod is %p", &c, &d);
	return (0);
}