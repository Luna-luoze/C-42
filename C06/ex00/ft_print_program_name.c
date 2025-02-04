/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:02:30 by luoguo            #+#    #+#             */
/*   Updated: 2025/02/03 21:08:10 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// 1. use indexing.
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] && argc)
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

// 2. use indexing and pointer arithmetic. 

// int	main(int argc, char **argv)
// {
// 	while (*argv[argc - 1])
// 	{
// 		write(1, argv[argc - 1], 1);
// 		argv[0]++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

// 3. use pointer arithmetic. 
// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = argc;
// 	while (**argv)
// 	{
// 		write(1, *argv, 1);
// 		(*argv) ++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
