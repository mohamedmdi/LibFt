/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:30:11 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/18 23:16:43 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		my_isspace(char c, char ss)
{
	if (c == ss)
		return (1);
	else
		return (0);
}

int		count_ln(char const *str, int index, char ss)
{
	int i;

	i = index;
	while (my_isspace(str[i], ss) == 0)
	{
		i++;
	}
	return (i - index);
}

int		my_count_word(char const *str, char ss)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	if (my_isspace(str[i], ss) == 0)
		nb++;
	while (str[i] != '\0')
	{
		if (my_isspace(str[i], ss))
		{
			while (my_isspace(str[i], ss) == 1)
			{
				if (str[i] == '\0')
					return (nb);
				i++;
			}
			nb++;
		}
		i++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**send;

	i = 0;
	j = 0;
	send = malloc(sizeof(char*) * (my_count_word(s, c) + 1));
	while (s[j] != '\0' && i < (my_count_word(s, c)))
	{
		k = 0;
		while (my_isspace(s[j], c) == 1)
			j++;
		send[i] = (char*)malloc(sizeof(char) * (count_ln(s, j, c) + 1));
		while (my_isspace(s[j], c) == 0)
		{
			send[i][k] = s[j];
			j++;
			k++;
		}
		send[i][k++] = '\0';
		i++;
	}
	send[i] = 0;
	return (send);
}
