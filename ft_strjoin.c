/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:12:46 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/02 23:44:35 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	size;

	size = ft_strlcat(s1) + ft_strlcat(s2);
	if (!s1)
		str = s2;
	if (!s2)
		str = s1;
	str = malloc(size + 1)
	if (!str)
		return (NULL);

	

	ft_strlcat
	return (str)
}


/*

[___s1____][___s2____]
[_______str__________] SIZE

if !s1 ou !s2
[0][_______s2 s1_____]
[_______str__________] SIZE
str = s2


char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	size;
	int i,
	int j;
	j = 0;
	size = ft_strlcat(s1) + ft_strlcat(s2);
	str = malloc(sizeof(char) * size + 1)
	if (!str)
		return (NULL);
	while (s1[i])
		str[i] = s1++;
	while (s2)
	stri++ = s2j++;

	

	ft_strlcat
	return (str)
}



