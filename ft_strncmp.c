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

int	ft_strncmp(const char *src, const char *str, int a);

int	ft_strncmp(const char *src, const char *str, int a)
{
	int	i;
	int	diff;

	i = 0;
	while ((src[i] != '\0' || str[i] != '\0') && (i < a))
	{
		if (src[i] != str[i])
		{
			diff = src[i] - str[i];
			if (diff < 0)
				return (-1);
			if (diff > 0)
				return (1);
		}
		i++;
	}
	return (0);
}
