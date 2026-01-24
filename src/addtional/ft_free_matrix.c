/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 00:49:13 by ccavalca          #+#    #+#             */
/*   Updated: 2026/01/24 00:50:01 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_free_matrix(char **matrix)
{
	int i = 0;
	if (!matrix)
		return;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}