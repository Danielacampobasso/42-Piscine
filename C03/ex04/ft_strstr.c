/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:12:58 by danalexa          #+#    #+#             */
/*   Updated: 2024/08/06 20:13:02 by danalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main() {
	char str[] = "Hello, buddie!";
	char to_find[] = "buddie";
	char *result = ft_strstr(str, to_find);

	if (result != NULL) {
		printf("Substring encontrada: %s\n", result);
	} else {
		printf("Substring não encontrada.\n");
	}

	return 0;
}
*/
