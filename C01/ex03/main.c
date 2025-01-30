/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:53:02 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/23 20:53:03 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int c;
	int d;


	a = -8;
	b = 3;
	c = 5;
	d = 6;
	ft_div_mod(a, b, &c, &d);
	printf("div is %d\nmod is %d\n", c, d);//are c and d are expected answer here?
	printf("the address for div is %p\nthe address for mod is %p", &c, &d);
	return (0);
}