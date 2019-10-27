/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:10:11 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/27 21:25:27 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*stri;

	stri = (char*)malloc(sizeof(*stri) * (ft_strlen(src) + 1));
	if (!stri)
		return (0);
	ft_strlcpy(stri, src, ft_strlen(src) + 1);
	return (stri);
}
