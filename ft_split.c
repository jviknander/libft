/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:15:05 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/07 17:48:49 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_delimiter_counter(char s, char c)
{
	int *count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{ 
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (0);
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	*matriz;
	int		i;
	int		end;

	if (!s || !c)
		return (0);
	matriz = malloc((ft_delimiter_counter(s, c) + 1);
	if (!matriz)
		return (0);
	i = 0;
	while (s[i])
	{
	}
	return (ft_substr(s, i, end - i));
}
