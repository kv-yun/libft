/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:05:48 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/08 18:43:08 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	d;
	size_t			i;

	d = c;
	a = b;
	i = 0;
	while (i < n)
	{
		a[i] = d;
		i++;
	}
	return (a);
}
