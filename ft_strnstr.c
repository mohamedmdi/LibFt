/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:54:49 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/27 21:30:08 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	char	*s;
	char	*find;

	s = (char*)str;
	find = (char*)to_find;
	if (!*to_find)
		return (s);
	while (*s && n > 0)
	{
		i = 0;
		while (*(s + i) == *(find + i) && i < n && s[i] != '\0')
		{
			i++;
		}
		if (find[i] == '\0')
			return (s);
		s++;
		n--;
	}
	return (0);
}
