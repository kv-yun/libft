/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:35:42 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/23 13:00:06 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int last_index;

	i = 0;
	last_index = -1;
	while (s[i])
	{
		if (c == s[i])
			last_index = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (last_index == -1)
		return (NULL);
	else
		return ((char *)(s + last_index));
}
