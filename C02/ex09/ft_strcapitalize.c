/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:42:43 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/29 14:02:45 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*ori;

	ori = str;
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	if (*str == '\0')
		return (ori);
	str++;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z')
			&& !(((*(str - 1) >= 'a' && *(str - 1) <= 'z')
					|| (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
					|| (*(str - 1) <= '9' && *(str - 1) >= '0'))))
			*str = *str - 32;
		else if ((*str >= 'A' && *str <= 'Z')
			&& ((*(str - 1) >= 'a' && *(str - 1) <= 'z')
				|| (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
				|| (*(str - 1) <= '9' && *(str - 1) >= '0')))
			*str = *str + 32;
		str++;
	}
	return (ori);
}

// better solution 2 with modularity 
// char	*ft_strlowcase(char *str)
// {
// 	char *ori;

// 	ori = str;
// 	while (*str)
// 	{
// 		if (*str >= 'A' && *str <= 'Z')
// 			*str = *str + ('a' - 'A');
// 		str++;
// 	}
// 	return (ori);
// }

// char	*ft_strcapitalize(char *str)
// {
// 	str = ft_strlowcase(str);
// 	char *ori;
// 	unsigned int flag;

// 	ori = str;
// 	flag = 1;
// 	while (*str)
// 	{
// 		if (flag == 1 && *str >= 'a' && *str <= 'z')
// 		{
// 			*str -= 32;
// 			flag = 0;
// 		}	
// 		else if (*str >= 'a' && *str <= 'z')
// 			flag = 0;
// 		else if (*str >= '0' && *str <= '9')
// 			flag = 0;
// 		else
// 			flag = 1;
// 		str++;	
// 	}
// 	return (ori);
// }
