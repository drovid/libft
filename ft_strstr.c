/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 18:04:40 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/24 14:46:13 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	int	i;
	int	z;
	int	find_size;

	i = 0;
	z = 0;
	find_size = 0;
	while (needle[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (needle[z] == haystack[i + z])
		{
			if (z == find_size - 1)
				return ((char *)(haystack + i));
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
