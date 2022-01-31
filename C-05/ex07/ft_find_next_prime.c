/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:41:04 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/19 14:41:05 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 1;
	while (a * a <= nb && a < 46341)
		a++;
	while (a > 1)
	{
		if (nb % a == 0)
			return (0);
		a--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}
