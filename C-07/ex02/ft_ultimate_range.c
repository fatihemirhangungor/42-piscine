/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:40:03 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/21 19:27:15 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dst;
	int	i;
	int	size;

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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
