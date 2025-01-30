/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:42:40 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/29 13:46:04 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srcl;
	char			*ori;
	unsigned int	i;

	srcl = 0;
	ori = src;
	i = 0;
	while (*src)
	{
		src++;
		srcl++;
	}
	if (size == 0)
		return (srcl);
	while (i < size - 1)
	{
		dest[i] = ori[i];
		i++;
	}
	dest[i] = '\0';
	return (srcl);
}
