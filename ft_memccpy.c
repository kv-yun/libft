/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:13:19 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/23 12:02:49 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		cr;
	unsigned char		*ds;
	unsigned const char	*sr;

	cr = c;
	ds = dst;
	sr = src;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		if (sr[i] == cr)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
