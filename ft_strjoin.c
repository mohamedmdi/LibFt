/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:44:13 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/23 15:15:06 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*txt;
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	txt = (char *)malloc(sizeof(*txt) * (i + j + 1));
	if (!txt)
		return (0);
	temp = txt;
	while (*s1)
		*txt++ = *s1++;
	while (*s2)
		*txt++ = *s2++;
	*txt = '\0';
	return (temp);
}
