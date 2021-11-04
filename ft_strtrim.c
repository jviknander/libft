/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:13:52 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/04 23:05:09 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	i;
	
	if (!s1 || !set)
		return (0);
	i = 0;
	end = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, i,end - i + 1));	
}

