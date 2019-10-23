/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:46:47 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/22 19:47:41 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*chr;
	size_t	z;

	z = 0;
	chr = malloc(count * size);
	if (!chr)
		return (0);
	while (z < (count * size))
		*((unsigned char *)chr + z++) = 0;
	return ((void *)chr);
}
