/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:52:19 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/19 22:31:09 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *str, size_t n)
{
	size_t t;

	t = n;
	if (dst == 0 && str == 0)
		return (0);
	while (n > 0)
	{
		*((char*)dst) = *((char*)str);
		dst++;
		str++;
		n--;
	}
	return (dst - t);
}
