/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:38:32 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/17 13:38:41 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_yazdir(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		char_yazdir('-');
		char_yazdir('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		char_yazdir('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char_yazdir((nb % 10) + 48);
}
