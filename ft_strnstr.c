/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 17:58:56 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/24 15:34:19 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*b;
	char	*l;
	char	*b_begin;

	l = (char*)needle;
	if (*l == 0)
		return ((char*)haystack);
	b_begin = (char*)haystack;
	while ((*haystack) && ((size_t)(haystack - b_begin) < len))
	{
		b = (char*)haystack;
		if (*b == *needle)
		{
			l = (char*)needle;
			while ((*b == *l) && ((size_t)(b - b_begin) < len))
			{
				b++;
				l++;
				if (*l == 0)
					return ((char*)haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
