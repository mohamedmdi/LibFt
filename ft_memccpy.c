/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:12:39 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/19 22:29:36 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)str;
	d = (unsigned char *)dst;
	if (n <= 0)
		return (NULL);
	while (n--)
	{
		*d = *s;
		if (*s == ((unsigned char)c))
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}
