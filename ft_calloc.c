/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:46:47 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/19 13:58:35 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*chr;
	size_t		z;

	z = 0;
	chr = (char *)malloc(count * size);
	while (z < count)
	{
		chr[z] = '\0';
		z++;
	}
	return ((void *)chr);
}
