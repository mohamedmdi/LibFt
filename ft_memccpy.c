/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:12:39 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/27 21:24:28 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n > 0)
	{
		if (*s == ((unsigned char)c))
		{
			*((unsigned char*)dst) = *s;
			return (dst + 1);
			break ;
		}
		*((unsigned char*)dst) = *s;
		n--;
		s++;
		dst++;
	}
	return (0);
}
