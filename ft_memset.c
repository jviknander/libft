/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:32:56 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/30 22:17:22 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*k;
	int				i;

	k = s;
	i = 0;
	while (i < n)
		k[i++] = c;
	return (s);
}
/*
[k[i]____] memória a ser preenchida, a partir do inicio 
*s(c)     n
*/
