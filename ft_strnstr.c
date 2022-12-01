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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	cp;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)haystack;
	if (needle[i] == '\0')
		return (ptr);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			cp = i;
			while (haystack[++i - 1] == needle[++j - 1])
				;
			if (needle[j] == '\0')
				return (ptr + cp);
			j = 0;
			i = cp;
		}
		i++;
	}
	return (0);
}
