/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:02:24 by luoguo            #+#    #+#             */
/*   Updated: 2025/02/03 21:54:32 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
// 1. use indexing.
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i] != NULL)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
	i = argc;
	return (0);
}

// 2. use pointers.
// int	main(int argc, char **argv)
// {
// 	int	i;
// 	argv++;
// 	while (*argv != NULL )
// 	{
// 		while (**argv != '\0')
// 		{
// 			write(1, *argv, 1);
// 			(*argv)++;
// 		}
// 		argv++;
// 		write(1,"\n",1);
// 	}

// 	i = argc;
// 	return (0);
// }

// 3. use pointers and indexing.
// int	main(int argc, char *argv[])
// {
// 	int i;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		while (*argv[i])
// 		{
// 			write(1,argv[i],1);
// 			argv[i]++;
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }