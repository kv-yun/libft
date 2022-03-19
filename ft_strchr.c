/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:53:32 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/23 13:00:33 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ct;

	ct = c;
	i = 0;
	if (ct != '\0')
	{
		while (s[i])
		{
			if (s[i] == ct)
				return ((char *)&(s[i]));
			i++;
		}
	}
	else
	{
		while (s[i])
			i++;
		return ((char *)&(s[i]));
	}
	return (NULL);
}
