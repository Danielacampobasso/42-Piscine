/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:44:42 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/03 18:00:20 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int main() {
    ft_putnbr(42);         
    write(1, "\n", 1);
    
    ft_putnbr(-42);        
    write(1, "\n", 1);
    
    ft_putnbr(0);        
    write(1, "\n", 1);
    
    ft_putnbr(2147483647); 
    write(1, "\n", 1);
    
    ft_putnbr(-2147483648); 
    write(1, "\n", 1);
    
    return 0;
}

