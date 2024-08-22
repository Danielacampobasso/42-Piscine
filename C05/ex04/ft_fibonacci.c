/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:03:54 by danalexa          #+#    #+#             */
/*   Updated: 2024/08/12 22:03:57 by danalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
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

void	ft_putendl(const char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putendl("Testing ft_fibonacci:");
	ft_putnbr(ft_fibonacci(2));
	write(1, "\n", 1);
	ft_putnbr(ft_fibonacci(0));
	write(1, "\n", 1);
	ft_putnbr(ft_fibonacci(1));
	write(1, "\n", 1);
	ft_putnbr(ft_fibonacci(10));
	write(1, "\n", 1);
	return (0);
}
*/
