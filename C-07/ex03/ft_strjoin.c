/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:15:33 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/22 10:10:08 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dst;
	int		i;
	int		j;
	int		dst_index;

	dst = malloc(sizeof(strs));
	i = -1;
	dst_index = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			dst[++dst_index] = strs[i][j];
		j = -1;
		while (sep[++j] != '\0' && i != size - 1)
			dst[++dst_index] = sep[j];
	}
	dst[++dst_index] = '\0';
	return (dst);
}
