/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:54:29 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/22 16:56:51 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned const char	*sr;
	unsigned char		*ds;

	sr = src;
	ds = dst;
	if (sr == NULL || ds == NULL)
		return (NULL);
	i = 0;
	while (sr > ds && i < len)
	{
		ds[i] = sr[i];
		i++;
	}
	while (sr < ds && len > 0)
	{
		ds[len - 1] = sr[len - 1];
		len--;
	}
	return (ds);
}
