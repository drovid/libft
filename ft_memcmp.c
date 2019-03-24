/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 13:20:40 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/24 14:43:29 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*si1;
	unsigned char	*si2;
	size_t			i;

	i = 0;
	si1 = (unsigned char*)s1;
	si2 = (unsigned char*)s2;
	while (n--)
	{
		if (si1[i] != si2[i])
			return (si1[i] - si2[i]);
		i++;
	}
	return (0);
}
