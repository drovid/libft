/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 21:49:34 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/23 13:29:52 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src1;
	size_t	i;

	i = 0;
	str = dst;
	src1 = (char*)src;
	while (i < n)
	{
		str[i] = src1[i];
		i++;
	}
	return (str);
}
