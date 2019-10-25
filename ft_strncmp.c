/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:13:16 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/24 21:10:39 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while ((n > 0) && (*str1 || *str2))
	{
		if (*(unsigned char *)str1 < *(unsigned char *)str2)
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		else if (*(unsigned char *)str1 > *(unsigned char *)str2)
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
