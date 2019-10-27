/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:00:29 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/27 21:28:50 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ret[i] = (unsigned char)c;
		i++;
	}
	return (ret);
}
