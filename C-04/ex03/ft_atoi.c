/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgungor <fgungor@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:24:13 by fgungor           #+#    #+#             */
/*   Updated: 2021/10/17 14:52:49 by fgungor          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

bool	sayi_mi(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	else
		return (false);
}

bool	isaret_varmi(char c)
{
	if (c == '+' || c == '-')
		return (true);
	else
		return (false);
}

bool	bosluk_varmi(char c)
{
	if (c == ' ' || c == '\t' || c == '\r')
		return (true);
	else
		return (false);
}

int	ft_atoi(char *str)
{
	int	sonuc;
	int	isaret;

	sonuc = 0;
	isaret = 1;
	while (bosluk_varmi(*str))
	{
		str++;
	}
	while (isaret_varmi(*str))
	{
		if (*str == '-')
			isaret = isaret * -1;
		str++;
	}
	while (sayi_mi(*str))
	{
		sonuc = (*str - '0') + (sonuc * 10);
		str++;
	}
	return (sonuc * isaret);
}
