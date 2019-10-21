/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:16:54 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/21 16:01:57 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char *s;

	s = (char *)str;
	while (*s != ch)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
