/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:33:02 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/12 15:44:28 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	const char *s;

	s = str;
	while (*str)
	{
		(void)*str++;
	}
	while (*((char *)str) != (char)c && (char *)str != s)
	{
		(void)*str--;
	}
	if (*((char *)str) == (char)c)
	{
		return ((void*)str);
	}
	return (0);
}
