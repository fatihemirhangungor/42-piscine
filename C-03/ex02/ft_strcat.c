/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:20:37 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/16 10:53:06 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*counter;
	int		size;

	counter = dest;
	size = 0;
	while (*counter)
	{
		size++;
		counter++;
	}
	while (*src != '\0')
	{
		dest[size] = *src;
		size++;
		src++;
	}
	dest[size] = '\0';
	return (dest);
}
