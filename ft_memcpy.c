/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:52:19 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/28 16:36:40 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *str, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)str;
	if (s1 == s2)
		return (s1);
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
