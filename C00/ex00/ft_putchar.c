/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:20:40 by danalexa          #+#    #+#             */
/*   Updated: 2024/08/04 14:23:07 by danalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int main(void)
{ 
	ft_putchar('a');
} */
