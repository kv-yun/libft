/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:53:58 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/23 20:56:51 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dstsize;
	size_t srcsize;

	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (size >= dstsize)
	{
		i = 0;
		while (dst[i] && i < size)
			i++;
		j = 0;
		while (src[j] && i < (size - 1))
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
		return (dstsize + srcsize);
	}
	return (srcsize + size);
}
