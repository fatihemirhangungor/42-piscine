/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:35:27 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/19 12:35:28 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (nb >= index * index)
	{
		if (index * index == nb)
			return (index);
		else if (index >= 46341)
			return (0);
		index++;
	}
	return (0);
}
