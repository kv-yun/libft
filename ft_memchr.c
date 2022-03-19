/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:17:38 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/25 15:37:50 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;
	unsigned char		cr;

	str = s;
	cr = c;
	i = 0;
	while (i < n && (str[i] || c == '\0'))
	{
		if (str[i] == cr)
			return ((void*)(str + i));
		i++;
	}
	return (NULL);
}
