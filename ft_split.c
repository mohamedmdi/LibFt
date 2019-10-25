/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:30:11 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/24 19:31:40 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**freefunc(char **s1, int i)
{
	while (i > 0 && i--)
		free(s1[i]);
	free(s1);
	return (0);
}

static int	ft_strcpy_c(char *dest, char const *src, char c)
{
	int decalage;

	decalage = 0;
	while (*src && *src != c)
	{
		*dest = *src;
		++dest;
		++src;
		++decalage;
	}
	*dest = '\0';
	return (decalage);
}

static int	ft_nbstr_c(char const *str, char c)
{
	int len;

	len = 0;
	while (*str)
	{
		while (*str && *str == c)
			++str;
		if (*str)
			++len;
		while (*str && *str != c)
			++str;
	}
	return (len);
}

static int	ft_strlen_c(char const *str, char c)
{
	int len;

	len = 0;
	while (*str && *str != c)
	{
		++str;
		++len;
	}
	return (len);
}

char		**ft_split(char const *str, char c)
{
	char	**s1;
	int		i;

	i = 0;
	if (!str)
		return (0);
	if (!(s1 = (char**)malloc(sizeof(*s1)
					* (ft_nbstr_c(str, c) + 1))))
		return (0);
	while (*str && *str == c)
		++str;
	while (*str)
	{
		if (!(s1[i] = (char*)malloc(sizeof(**s1)
						* (ft_strlen_c(str, c) + 1))))
			return (freefunc(s1, i));
		str = str + ft_strcpy_c(s1[i], str, c);
		++i;
		while (*str && *str == c)
			++str;
	}
	s1[i] = 0;
	return (s1);
}
