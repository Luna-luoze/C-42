/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:22:02 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/29 23:01:40 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	lto_find;

	lto_find = ft_strlen(to_find);
	if (lto_find == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			to_find++;
			if (*to_find == '\0')
				return (str - lto_find + 1);
		}
		str++;
	}
	return (NULL);
}
