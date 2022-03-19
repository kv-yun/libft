/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:14:02 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/24 13:23:46 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intmax_ret(int signe, const char *str)
{
	if (ft_strncmp("-2147483649", str, ft_strlen(str)) == 0)
		return (2147483647);
	else if (signe == 1)
		return (-1);
	else
		return (0);
}

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	size_t	i;
	int		signe;
	int		result;

	i = 0;
	result = 0;
	signe = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (((result * 10) <= 2147483640 && ((signe == -1) && (result + str[i] -
	'0') <= 214748372)) || ((signe == 1) && result + str[i] - '0' <= 214748381))
			result = (result * 10) + (str[i] - '0');
		else
			return (ft_intmax_ret(signe, str));
		i++;
	}
	return (result * signe);
}
