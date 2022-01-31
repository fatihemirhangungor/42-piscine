/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:56:59 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/19 14:57:00 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arguman_sayisi, char **arguman_arrayi)
{
	int	i;

	i = 0;
	if (arguman_sayisi > 0)
	{
		while (arguman_arrayi[0][i] != '\0')
		{
			write(1, &arguman_arrayi[0][i], 1);
			i++;
		}
	}
	return (0);
}
