/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:15:05 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/07 00:11:37 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_count_c(char s, char c)
{
	int *count;
	int	i;

	while (s[i] && c)
	{ 
		i = 0;
		if (s[i] == c)
			s[i++] = c;
		if ()


		return (ft_substr());

	}
}

char	**ft_split(char const *s, char c)
{
	char	*subs;
	int		i;
	int		size;
	
	size = ft_strlen(s) - c[j];
	if (ft_strlen(s) < size)
		ft_count_c();
	subs = malloc(size + 1);
}
