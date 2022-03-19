/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:40:37 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/24 12:11:01 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*sr;
	unsigned char		*ds;

	if (src == NULL && dst == NULL)
		return (NULL);
	ds = dst;
	sr = src;
	i = 0;
	while (i < n && dst && src)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
