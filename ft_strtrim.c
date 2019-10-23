/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 23:39:22 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/22 22:31:29 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check (char c, char const *set )
{
	while (*set)
		if(*set++ == c)
			return(1);
	return(0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
	int strt;
	int end;
	int l;
	char *str;

	strt = 0;
	end = ft_strlen(s1);
	while (check(s1[strt], set))
		strt++;
	while (check(s1[end - 1], set))
		end--;
	if (strt > end)
		return (ft_strdup(""));
	l = end - strt;
	str = (char *)malloc(sizeof(*str) * l + 1);
	if (!str)
		return (0);
	l = 0;
	while (strt < end)
		str[l++] = s1[strt++];
	str[l] = '\0';
	return(str);
}
