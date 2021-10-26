/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:43:14 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/26 18:28:01 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	size_t			i;

	str_1 = s1;
	str_2 = s2;
	i = 0;
	if (str_1[i++] == str_2[i++] || n == 0)
		return (0);
	else if (i < n)
	{
		while (str_2[i] != str_1[i])
			i++;
		return (str_2 - str_1);
	}
}

/*
 * strs are identical
 * [___str_1___]
 *
 * [___str_2___]

 * strs are not identical
 * [str_1___]
 *
 * [______str_2]
 *
 * */
