/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:43:10 by swied             #+#    #+#             */
/*   Updated: 2025/01/26 23:13:44 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	free_memory(int **tab, int *entry);

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		check_input(int ac, char **av);
int		chk_unique(int **tab, int pos, int num);
int		check_visible(int **tab, int pos, int entry[16]);
int		**create_malloc(int rows, int cols);

#endif