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

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		cp;
	char	*ptr;

	i = 0;
	cp = -1;
	ptr = (char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
			cp = i;
		i++;
	}
	if (ptr[i] == c)
		cp = i;
	if (cp != -1)
		return (ptr += cp);
	return (0);
}
