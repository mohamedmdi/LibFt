/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 22:23:01 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/23 21:08:56 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*osrc;
	size_t	ss;

	osrc = (char *)src;
	ss = size;
	if (ss != 0)
		while (--ss != 0)
			if ((*dst++ = *src++) == '\0')
				break ;
	if (ss == 0)
	{
		if (size != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - osrc - 1);
}
