/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:34:25 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/25 14:26:36 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	if (src == NULL)
		return (0);
	while (i < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > ft_strlen(src))
		dst[ft_strlen(src)] = '\0';
	else if (dstsize != 0)
		dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}
