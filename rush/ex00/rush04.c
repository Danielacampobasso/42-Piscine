/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 06:56:02 by rdurban-          #+#    #+#             */
/*   Updated: 2024/08/04 15:06:46 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	line;

	line = 1;
	while (line <= y && x > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && line == 1) || (col == x && line == y))
				ft_putchar('A');
			else if ((col == x && line == 1) || (line == y && col == 1))
				ft_putchar('C');
			else if ((col != 1 && col != x) && (line == 1 || line == y))
				ft_putchar('B');
			else if ((line != 1 && col == 1) || (col == x || line == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		line++;
		ft_putchar('\n');
	}
}

void	check_input(int xx, int yy)
{
	if ((xx <= 0) || (yy <= 0))
	{
		ft_putchar('E');
		ft_putchar('R');
		ft_putchar('R');
		ft_putchar('O');
	}
	else
	{
		rush(xx, yy);
	}
}
