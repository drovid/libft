/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsrdelone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 13:02:29 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/23 13:02:32 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **link, void (*del)(void *, size_t))
{
	del(&((*link)->content), (*link)->content_size);
	free(*link);
	*link = NULL;
}
