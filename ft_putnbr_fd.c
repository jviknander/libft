/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:20:56 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/30 23:21:32 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 
void	ft_putnbr_fd(int nb, int fd);
{
	if (nb == -2147483648)
		ft_putchar_fd('-2147483648', fd)
	else 
	{
		if (nb < 0)
			ft_putchar_fd('-', fd);
			ft_putchar_fd(nb * -1, fd);
		if (nb >= 10)
			ft_putchar_fd(nb / 10, fd);
			ft_putchar_fd(nb % 10, fd);
		else
			ft_putchar_fd('0', fd);
	}
}
