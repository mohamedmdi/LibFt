/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:54:49 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/25 18:08:26 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*to_find)
		return ((char *)str);
	if (n == 0)
		return (0);
	while (str[i] && n > 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && n > 0)
		{
			if (to_find[j] == '\0')
				return ((void *)str + i);
			j++;
			n--;
		}
		if (to_find[j] == '\0')
			return ((void *)str + i);
		i++;
		n--;
	}
	return (0);
}
