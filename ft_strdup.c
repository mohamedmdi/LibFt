/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:10:11 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/22 19:59:51 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		l;
	int		i;
	char	*stri;

	l = 0;
	i = 0;
	while (src[l] != '\0')
		l++;
	stri = (char*)malloc(sizeof(*stri) * (l + 1));
	if (!stri)
		return (0);
	while (i < l)
	{
		stri[i] = src[i];
		i++;
	}
	stri[i] = '\0';
	return (stri);
}
