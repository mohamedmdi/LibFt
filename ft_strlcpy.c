/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 22:23:01 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/21 22:09:58 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (*src == 0)
	{
		dest[0] = '\0';
		return (0);
	}
	while (*src && n > 0)
	{
		while (*src && n - 1 > 0)
		{
			*dest++ = *src++;
			i++;
			n--;
		}
		*dest++ = '\0';
		while (n - 1 == 0 && *src++)
			i++;
		if (n > 0)
			n--;
	}
	return (i);
}
