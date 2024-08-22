/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:05:52 by danalexa          #+#    #+#             */
/*   Updated: 2024/08/13 19:05:54 by danalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
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
	ft_putnbr(ft_find_next_prime(1));
	write(1, "\n", 1);
	ft_putnbr(ft_find_next_prime(2));
	write(1, "\n", 1);
	ft_putnbr(ft_find_next_prime(4));
	write(1, "\n", 1);
	ft_putnbr(ft_find_next_prime(11));
	write(1, "\n", 1);
	ft_putnbr(ft_find_next_prime(14));
	write(1, "\n", 1);
	return (0);
}
*/
