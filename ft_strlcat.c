/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:49:00 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/21 22:23:28 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (*dest && n > 0)
	{
		(void)*dest++;
		i++;
		n--;
	}
	while (*src && n > 1)
	{
		*dest++ = *src++;
		i++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}
