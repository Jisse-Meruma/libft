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

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*start;
	t_list	**list;

	if (!f || !lst)
		return (NULL);
	node = ft_lstnew(f(lst->content));
	start = node;
	list = &node;
	lst = lst->next;
	while (lst)
	{
		node->next = ft_lstnew(f(lst->content));
		node = node->next;
		lst = lst->next;
	}
	list = &lst;
	ft_lstclear(list, del);
	return (start);
}
