/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:38:38 by danalexa          #+#    #+#             */
/*   Updated: 2024/08/07 17:38:41 by danalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	skip_whitespace_and_sign(char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] <= ' ' && str[i] != '\0')
		i++;
	*sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	index;

	if (!is_valid_base(base))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	i = skip_whitespace_and_sign(str, &sign);
	result = 0;
	while (str[i])
	{
		index = base_index(str[i], base);
		if (index == -1)
			break ;
		result = result * base_len + index;
		i++;
	}
	return (result * sign);
}

/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("101", "01"));
	printf("%d\n", ft_atoi_base("7F", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-1E", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("123", "012345"));
	printf("%d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));
	printf("%d\n", ft_atoi_base("   -+--7F", "0123456789ABCDEF"));
	return (0);
}
*/
