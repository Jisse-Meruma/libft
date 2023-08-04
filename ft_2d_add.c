/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisse <jisse@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:45:17 by jmeruma           #+#    #+#             */
/*   Updated: 2023/06/29 14:26:26 by jisse            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**empty_arr(char *str)
{
	char	**new_arr;

	new_arr = malloc(2 * sizeof(char *));
	if (!new_arr)
		return (NULL);
	new_arr[0] = ft_strdup(str);
	new_arr[1] = NULL;
	return (new_arr);
}

static void	free_arr(char *new_arr[], int w_index)
{
	while (w_index >= 0)
	{
		free(new_arr[w_index]);
		w_index--;
	}
	free(new_arr);
}

char	**ft_2d_add(char *arr[], char *str)
{
	char	**new_arr;
	int		words;
	int		w_index;

	w_index = 0;
	if (!str)
		return (arr);
	if (!arr)
		return (empty_arr(str));
	words = ft_2d_arrlen(arr);
	new_arr = malloc((words + 2) * sizeof(char *));
	if (!new_arr)
		return (NULL);
	while (arr[w_index])
	{
		new_arr[w_index] = ft_strdup(arr[w_index]);
		if (new_arr[w_index] == NULL)
			free_arr(new_arr, w_index - 1);
		w_index++;
	}
	new_arr[w_index] = ft_strdup(str);
	if (new_arr[w_index] == NULL)
		free_arr(new_arr, w_index - 1);
	new_arr[w_index + 1] = NULL;
	return (new_arr);
}
