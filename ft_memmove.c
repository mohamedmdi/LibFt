/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:50:51 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/19 22:31:48 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*tmp;
	const char	*s;

	tmp = dst;
	s = src;
	if (dst == 0 && src == 0)
		return (0);
	if (dst <= src)
	{
		while (n)
		{
			*tmp++ = *s++;
			n--;
		}
	}
	else
	{
		s += n;
		tmp += n;
		while (n--)
			*--tmp = *--s;
	}
	return (dst);
}
