/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozuuygu <sozuuygu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:25:17 by sozuuygu          #+#    #+#             */
/*   Updated: 2024/02/14 16:24:38 by sozuuygu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nbr)
{
	int	a;

	a = nbr + '0';
	write(1, &a, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10);
	}
	else
	{
		ft_putchar(nbr % 10);
	}
}
