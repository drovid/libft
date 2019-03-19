/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 19:41:12 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/10 19:42:06 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			new[i] = str[i] + 32;
		else
			new[i] = str[i];
		++i;
	}
	new[i] = '\0';
	return (new);
}
