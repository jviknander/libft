/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:27:24 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/29 17:10:04 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	int				i;

	i = 0;
	if (n == 0)
		return (0);
	str_1 = s1;
	str_2 = s2;
	while (str_1[i] && str_2[i] && i < n - 1)
		i++;
	return (str_1[i] - str_2[i]);
}









/*
   	n - 1 para ver o ultimo caracter antes do '/0'	

*/
