/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:54:49 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/19 15:07:12 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (void *)str;
	while (str[i] != '\0' && n > 0)
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
