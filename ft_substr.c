/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:08:36 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/31 18:15:33 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int	size;
	int 	i;

	if (s)
	{
		if (ft_strlen(s) <= len)
			size = ft_strlen(s);
		else
			size = len;
		sub = ft_calloc(len + 1);
		i = 0;
		if (s[start])
		{
			while (i < len)
				sub[i++] = s[start++];
			sub[i] = '\0';
		}
		else
			return (0);
	}
	return (sub);
}	
/*
size > ft_strlen(s)
   [___s___]
   		[___sub___] 
		start-->len


sub = substring will allocate the memmory(size) and if it exits it will fill it with '/0', so the 's' can be returned. if sub does not exist, return 0.



---------------

if (start < ft_strlen(s) - 1)



		 len >= ft_strlen(s)

		 ------------------
		 |    ____        |
		 |   |___|s       |
		 |----------------|sub
		 sub size = ft_strlen(s)

 
		 len < ft_strlen(s)
		 ------------------
		 |    ____        |
		 |   |___|sub     |
 		 |----------------|s
		 sub size = (max) len
 
*/
