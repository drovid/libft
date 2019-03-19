/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 12:59:24 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/18 13:13:02 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memrealloc(void *buf, size_t size)
{
	void	*tmp;

	if (!buf)
		return (ft_memalloc(size));
	if (!size && buf)
	{
		ft_memdel(&buf);
		return (buf);
	}
	tmp = ft_memalloc(size);
	ft_memcpy(tmp, buf, size);
	ft_memdel(&buf);
	return (tmp);
}
