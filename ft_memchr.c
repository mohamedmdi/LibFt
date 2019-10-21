/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:57:09 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/18 23:05:35 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n > 0)
	{
		if (*((char *)str) == (char)c)
		{
			return ((void *)str);
			break ;
		}
		str++;
		n--;
	}
	return (0);
}
