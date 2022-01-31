/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:41:19 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/18 12:41:21 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	toplam;

	toplam = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		toplam = toplam * nb;
		nb--;
	}
	return (toplam);
}
