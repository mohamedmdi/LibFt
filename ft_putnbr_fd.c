/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchergui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:21:56 by mchergui          #+#    #+#             */
/*   Updated: 2019/10/19 15:10:26 by mchergui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int i;

	i = nb;
	if (nb < 0)
	{
		i = -nb;
		ft_putchar_fd('-', fd);
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd(i % 10 + '0', fd);
	}
	else if (i < 10)
		ft_putchar_fd(i + '0', fd);
}
