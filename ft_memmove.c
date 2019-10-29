/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:50:51 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/28 16:37:00 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src < dst)
	{
		while (n)
		{
			*((char*)dst + (n - 1)) = *((char*)src + (n - 1));
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
