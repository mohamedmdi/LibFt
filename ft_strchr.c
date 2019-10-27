/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:16:54 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/27 21:25:12 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(str) + 1;
	while (j--)
	{
		if (str[i] == (unsigned char)ch)
			return ((char*)(str + i));
		i++;
	}
	return (0);
}
