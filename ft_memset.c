/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:00:29 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/24 19:47:52 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char *ret;

	ret = (char *)str;
	while (n > 0)
	{
		*((char*)str) = (char)c;
		str++;
		n--;
	}
	return (ret);
}
