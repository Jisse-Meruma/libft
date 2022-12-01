/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmeruma <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:05:51 by jmeruma       #+#    #+#                 */
/*   Updated: 2022/10/03 15:05:53 by jmeruma       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	fill;
	char	*ptr;
	int		i;

	i = 0;
	fill = 0;
	if (size == 0)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (count > 0)
	{
		ptr[i] = fill;
		count--;
		i++;
	}
	return ((void *)ptr);
}
