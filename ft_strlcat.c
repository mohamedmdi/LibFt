/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:49:00 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/29 13:40:49 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t ls;
	size_t ld;

	i = 0;
	if ((dest == 0 || src == 0) && n == 0)
		return (ft_strlen(src));
	ld = ft_strlen((const char*)dest);
	ls = ft_strlen(src);
	if (n == 0)
		return (ls);
	if (ld > n)
		return (ls + n);
	if (n > ld)
	{
		while (src[i] != '\0' && (ld + i) < (n - 1))
		{
			dest[ld + i] = src[i];
			i++;
		}
		dest[ld + i] = '\0';
	}
	return (ls + ld);
}
