/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:13:52 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/04 05:56:46 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	find_set_in_c(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	int	size;
	
	if (!s1)
		return (0);
	while (s1 && find_set_in_c(*s1, set))
		s1++;
	size = ft_strlen(s1);
	strim = malloc(size + 1);
	if (!strim)
		return (NULL);
	strim = (char *)s1;
	return (strim);	
}
