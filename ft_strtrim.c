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
#include "libft.h"

int	counter(char const *s1, char const *set, int i, int j);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		total;
	char	*ptr;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	total = ft_strlen(s1) + counter(s1, set, i, j);
	ptr = (char *)malloc(total + 1);
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] != set[j])
			{
				ptr[k] = s1[i];
				break;
			}
			j++;
		}
		k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}

int	counter(char const *s1, char const *set, int i, int j)
{
	int	counter;

	counter = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				counter--;
				break;
			}
			j++;
		}
		i++;
	}
	return (counter);
}
