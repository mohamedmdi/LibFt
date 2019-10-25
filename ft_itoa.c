/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:47:30 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/24 19:52:40 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*writeandswap(long n, int l)
{
	int		ret;
	char	*str;

	str = (char *)malloc(sizeof(*str) * l + 1);
	if (!str)
		return (0);
	str[l--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		ret = n % 10;
		str[l--] = ret + '0';
		n = n / 10;
	}
	return (str);
}

static int		flen(long n)
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

char			*ft_itoa(int n)
{
	int		isn;
	int		l;
	char	*str;
	long	ui;

	isn = 0;
	ui = n;
	l = flen(ui);
	if (ui == 0)
	{
		str = writeandswap(ui, 1);
		return (str);
	}
	if (n < 0)
	{
		isn = 1;
		ui = ui * -1;
	}
	str = writeandswap(ui, l);
	if (!str)
		return (0);
	if (isn)
		str[0] = '-';
	return (str);
}
