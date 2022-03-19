/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:37:45 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/24 12:05:40 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	unsigned char	n;
	unsigned char	d;
	size_t			i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while ((s1[i] || s2[i]) && i < c)
	{
		n = (unsigned char)s1[i];
		d = (unsigned char)s2[i];
		if (n != d)
		{
			return (n - d);
		}
		i++;
	}
	return (0);
}
