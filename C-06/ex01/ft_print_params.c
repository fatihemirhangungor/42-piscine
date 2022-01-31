/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:26:43 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/20 13:26:45 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arguman_sayisi, char **arguman_arrayi)
{
	int	i;
	int	j;

	i = 1;
	if (arguman_sayisi > 1)
	{
		while (i < arguman_sayisi)
		{
			j = 0;
			while (arguman_arrayi[i][j] != '\0')
			{
				write(1, &arguman_arrayi[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
