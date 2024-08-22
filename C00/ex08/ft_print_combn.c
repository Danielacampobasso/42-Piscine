/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:17:40 by danalexa          #+#    #+#             */
/*   Updated: 2024/08/21 22:17:41 by danalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

static void	init_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
}

static void	update_tab(int *tab, int n)
{
	int	j;

	tab[n - 1]++;
	j = n - 1;
	while (j > 0)
	{
		if (tab[j] > 9)
		{
			tab[j - 1]++;
			tab[j] = tab[j - 1] + 1;
		}
		j--;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n < 1 || n >= 10)
		return ;
	init_tab(tab, n);
	while (tab[0] <= (10 - n))
	{
		print(tab, n);
		update_tab(tab, n);
	}
}

/*
int	main()
{
	ft_print_combn(0);
} */
