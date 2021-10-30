/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:25:52 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/30 22:14:56 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, nmemb * size);
	return (m);
}

/*
// m is a pointer to the allocated memory of malloc.
// vai meter zeros na memoria alocada pelo malloc
// 
// proteger o malloc pq essa memoria pode estar a ser alocada,
// e quando nao tem mais espaco, retorna nulo. 
// */
