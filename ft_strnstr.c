/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:47:20 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/23 11:25:55 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	len = 0;
	if (!s2[0])
		return ((char*)s1);
	if (!s1[0])
		return (NULL);
	while (s2[len])
		len++;
	while (*s1 && i < n)
	{
		j = 0;
		while (s1[j] == s2[j] && s2[j] && (j + i) < n && s1[j])
			j++;
		if (j == len)
			return ((char*)s1);
		else
			s1++;
		i++;
	}
	return (0);
}
