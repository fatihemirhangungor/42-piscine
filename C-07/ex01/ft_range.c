/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:24:11 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/21 18:25:35 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*dst;
	int		i;
	int		size;

	if (min >= max)
		return (NULL);
	size = max - min;
	dst = malloc((sizeof(int) * size) + 1);
	i = 0;
	while (min < max)
	{
		dst[i] = min;
		i++;
		min++;
	}
	return (dst);
}
