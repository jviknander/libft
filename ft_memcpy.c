/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:26:07 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/27 10:26:09 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ret;
	const unsigned char	*s:
	size_t			i;

	ret = dest;
	s = src;
	if (ret != s)
	{
		i = 0;
		while (i < n)
			ret[i++] = s[i++];
	}
	return (ret)
}

/*
	ret = dest;
	if (src < dest)
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	else
		return (NULL);
	return (ret);

*/

