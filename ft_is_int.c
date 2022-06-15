/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:30:01 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/15 13:32:25 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int chr)
{
	return (chr == 9 || chr == 10 || chr == 11
		|| chr == 12 || chr == 13 || chr == 0 || chr == ' ');
}

static int	ft_issign(char chr)
{
	return (chr == '-' || chr == '+');
}

static int	apinto_atoi(const char *str, int *error)
{
	int	sign;
	int	res;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (ft_isdigit(*str))
	{
		if ((res * 10 + (*(str) - 48)) < res)
			*error = 1;
		res = res * 10 + (*(str++) - 48);
	}
	if (*str && !ft_isdigit(*str))
		*error = 1;
	return (res * sign);
}

int	ft_is_int(char *src)
{
	int		value;
	int		error;

	error = 0;
	value = apinto_atoi(src, &error);
	if (!error)
		return (1);
	else
		return (0);
}
