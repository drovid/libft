/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 16:49:16 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/10 20:26:17 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_update(char *str, char *update)
{
	char	*tmp;

	tmp = update;
	if (str != NULL)
		free(str);
	str = update;
	return (str);
}
