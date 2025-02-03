/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:25:11 by luoguo            #+#    #+#             */
/*   Updated: 2025/02/03 14:24:53 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//stores sign. format integer dealt with. deal with edge cases
// int	ft_nbrsign(int nb, int *sign, int *neg_max)
// {
// 	if (nb < 0)
// 	{
// 		*sign = -1;
// 		if (nb == -2147483648)
// 		{
// 			nb = 2147483647;
// 			*neg_max = 1;
// 		}
// 		else
// 			nb = -nb;
// 	}
// 	return (nb);
// }

// //filled in 0;
// void	ft_prpare_str(char *nbr)
// {
// 	int	i;

// 	i = 10;
// 	while (i >= 0)
// 	{
// 		nbr[i] = '0';
// 		i--;
// 	}
// }

// //generate the string of number
// void	ft_gen_str(char *nbr, int nb, int *neg_max, int *sign)
// {
// 	int	i;

// 	i = 0;
// 	if (*neg_max == 1)
// 	{
// 		nbr[10 - i] = '8';
// 		nb = nb / 10;
// 		i++;
// 	}
// 	while (nb >= 10)
// 	{
// 		nbr[10 - i] = nb % 10 + '0';
// 		nb = nb / 10;
// 		i++;
// 	}
// 	nbr[10 - i] = nb % 10 + '0';
// 	if (*sign == -1)
// 		nbr[10 - i - 1] = '-';
// }

// //print out nbr[]
// void	ft_print(char *nbr)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 11)
// 	{
// 		if (nbr[i] == '0')
// 			i++;
// 		else if (nbr[i] != '0')
// 		{
// 			while (i < 11)
// 			{
// 				write(1, &nbr[i], 1);
// 				i++;
// 			}
// 		}
// 	}
// }
// //write special case 0. call functions.

// void	ft_putnbr(int nb)
// {
// 	char	nbr[11];
// 	int		sign;
// 	int		neg_max;

// 	if (nb == 0)
// 	{
// 		write(1, "0", 1);
// 		return ;
// 	}
// 	ft_prpare_str(nbr);
// 	sign = 1;
// 	neg_max = 0;
// 	nb = ft_nbrsign(nb, &sign, &neg_max);
// 	ft_gen_str(nbr, nb, &neg_max, &sign);
// 	ft_print(nbr);
// }

	// use % to get the smallest number.
	// in the char [] the sequence 's not important.
	//char: at most 11 including the sign

	
// 	below is a recursion way doing it.
//  this is much more efficient
// 
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
	else if (nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}