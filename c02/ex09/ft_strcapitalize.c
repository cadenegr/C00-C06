/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:29:03 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/23 16:39:34 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	signal;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] >= 'a' && str [i - 1] <= 'z')
			signal = 1;
		else if (str[i -1] >= '0' && str[i - 1] <= '9')
			signal = 1;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			signal = 1;
		else
			signal = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && signal == 1)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && signal == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);

	int j;
	j = 0;
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
	return(0);
}*/
