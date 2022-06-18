/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 01:42:39 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/18 01:42:55 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	i = 0;
	while (str_1[i] && (str_1[i] == str_2[i]))
		i++;
	return (str_1[i] - str_2[i]);
}
