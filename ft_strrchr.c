/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:33:02 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/27 21:30:27 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int len;
	int i;

	len = 0;
	i = 0;
	if (c == '\0')
		return ((char*)str + ft_strlen(str));
	while (*str)
	{
		str++;
		len++;
	}
	str--;
	while (i < len)
	{
		if (*str == (char)c)
			return ((char*)str);
		str--;
		i++;
	}
	return (0);
}
