/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:46:09 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/23 22:54:17 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	l = ft_strlen(s);
	if (l - start < len)
		len = l - start;
	str = (char*)malloc(sizeof(*str) * len + 1);
	if (str == 0)
		return (0);
	if (len == 0 || start >= l)
		return (ft_strdup(""));
	while (i < len && start <= l)
	{
		str[i++] = s[start];
		start++;
	}
	str[i] = '\0';
	return (str);
}
