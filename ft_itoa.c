/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:47:30 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/18 23:17:07 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*writeandswap(int n, int l)
{
	int		ret;
	char	*str;

	str = (char *)malloc(sizeof(*str) * l + 1);
	str[l--] = '\0';
	while (n != 0)
	{
		ret = n % 10;
		str[l--] = ret + '0';
		n = n / 10;
	}
	return (str);
}

int		flen(int n)
{
	int ii;

	ii = 0;
	if (n < 0)
	{
		n *= -1;
		ii = 1;
	}
	while (n)
	{
		n = n / 10;
		ii++;
	}
	return (ii);
}

char	*ft_itoa(int n)
{
	int		isn;
	int		l;
	char	*str;

	isn = 0;
	l = flen(n);
	if (n == 0)
	{
		str = (char *)malloc(sizeof(*str) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		isn = 1;
		n *= -1;
	}
	str = writeandswap(n, l);
	if (isn)
		str[0] = '-';
	return (str);
}
