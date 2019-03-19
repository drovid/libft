/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 17:37:12 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/05 18:12:35 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	else if (!(ft_strcmp(s1, s2)))
		return (1);
	return (0);
}
