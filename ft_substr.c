/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:46:09 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/19 13:59:36 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		l;
	int					i;
	char				*str;
	int					lenn;

	l = 0;
	i = 0;
	lenn = len;
	while (s[l] != '\0')
		l++;
	str = (char*)malloc(sizeof(*str) * lenn + 1);
	if (str == 0 || start == 0 || lenn == 0 ||
			lenn < 0 || start > l)
		return (0);
	while (i < lenn && start <= l)
	{
		str[i] = s[start - 1];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
