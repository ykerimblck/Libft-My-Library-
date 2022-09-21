/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulacak <ybulacak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 07:37:50 by ybulacak          #+#    #+#             */
/*   Updated: 2022/07/06 07:37:56 by ybulacak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t	len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc < dstc)
	{
		while (len--)
			dstc[len] = srcc[len];
	}
	else
		ft_memcpy(dstc, srcc, len);
	return (dst);
}
