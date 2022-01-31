/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:28:58 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/20 13:40:03 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	karsilastir(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
		{
			j = i;
			while (++j < ac)
			{
				if (karsilastir(av[i], av[j]) > 0)
				{
					tmp = av[i];
					av[i] = av[j];
					av[j] = tmp;
				}
			}
		}
		i = 0;
		while (++i < ac)
			yazdir(av[i]);
	}
	return (0);
}
