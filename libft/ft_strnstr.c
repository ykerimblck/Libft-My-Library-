/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulacak <ybulacak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 07:40:23 by ybulacak          #+#    #+#             */
/*   Updated: 2022/07/06 07:40:28 by ybulacak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && *(haystack + i))
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			while (*(haystack + i + j) == *(needle + j) && i + j < len)
			{
				if (!*(needle + j + 1))
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
