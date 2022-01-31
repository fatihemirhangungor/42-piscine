/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:21:17 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/16 11:10:54 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size;
	unsigned int	i;
	char			*ptr;

	ptr = dest;
	size = 0;
	while (*ptr)
	{
		size++;
		ptr++;
	}
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
