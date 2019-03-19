/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 17:44:00 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/03 17:46:27 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;
	int				j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		fstr = (char *)malloc(j * sizeof(fstr));
		while (s[i] != 0)
		{
			fstr[i] = f(i, s[i]);
			i++;
		}
		return (fstr);
	}
	return (NULL);
}
