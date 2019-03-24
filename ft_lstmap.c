/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 13:06:15 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/24 15:11:43 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;

	if (lst)
	{
		if (!(new_list = (t_list*)malloc(sizeof(lst))))
			return (NULL);
		new_list = f(lst);
		new_list->next = ft_lstmap(lst->next, f);
		return (new_list);
	}
	return (NULL);
}
