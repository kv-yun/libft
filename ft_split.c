/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkevin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:27:06 by pkevin            #+#    #+#             */
/*   Updated: 2019/10/20 12:33:24 by pkevin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *str, char charset)
{
	int i;
	int ct;
	int flag;

	flag = 0;
	ct = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != charset)
			flag = 0;
		if (str[i] == charset && flag == 0)
		{
			flag = 1;
			ct++;
		}
		i++;
	}
	return (ct);
}

static char		**ft_free(char **tab, int x)
{
	while (x > 0)
	{
		free(tab[x]);
		x--;
	}
	free(tab);
	return (NULL);
}

static void		ft_split_add(const char *str, char **tab, int j, int i)
{
	int y;

	if (i > -1000)
	{
		tab[j] = malloc((i + 1) * sizeof(char));
		if (tab[j] == NULL)
			return ;
		y = 0;
		while (i > 0)
		{
			tab[j][y] = str[y];
			y++;
			i--;
		}
		tab[j][y] = '\0';
	}
	else
	{
		tab[j] = malloc(1 * sizeof(char) + 1);
		if (tab[j] == NULL)
			return ;
		else
			tab[j] = 0;
	}
}

static int		ft_size_word(const char *str, char charset)
{
	int i;

	i = 0;
	while (str[i] != charset && str[i])
		i++;
	return (i);
}

char			**ft_split(const char *str, char charset)
{
	char	**tab;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	i = ft_count(str, charset) + 1;
	if (!(tab = malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	j = 0;
	while (*str)
	{
		i = ft_size_word(str, charset);
		if (i > 0)
		{
			ft_split_add(str, tab, j, i);
			if (tab[j++] == NULL)
				return (ft_free(tab, j - 2));
			while (i-- > 1)
				str++;
		}
		str++;
	}
	ft_split_add(str, tab, j, -1001);
	return (tab[j] == 0 ? tab : ft_free(tab, j));
}
