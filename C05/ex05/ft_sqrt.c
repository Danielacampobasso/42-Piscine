/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:14:47 by danalexa          #+#    #+#             */
/*   Updated: 2024/08/13 18:14:49 by danalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb && i * i > 0)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}


int	main(void)
{
	ft_putnbr(ft_sqrt(4));
	write(1, "\n", 1);
	ft_putnbr(ft_sqrt(10));
	write(1, "\n", 1);
	ft_putnbr(ft_sqrt(16));
	write(1, "\n", 1);
	ft_putnbr(ft_sqrt(25));
	write(1, "\n", 1);
	ft_putnbr(ft_sqrt(-4));
	write(1, "\n", 1);
	return (0);
}
*/
