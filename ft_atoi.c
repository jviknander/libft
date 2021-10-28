/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:23:54 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/28 15:50:21 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	k;
	int	n;

	i = 0;
	k = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' 
				|| str[i] == '\r' || str [i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			k *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	return (n * k);
}
