/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:21:16 by cadenegr          #+#    #+#             */
/*   Updated: 2023/04/01 22:06:28 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	neg = 0;
	nb = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	if (neg % 2 == 0)
		return (nb);
	return (-nb);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return(0);

	ft_atoi(argv[1]);

    printf ("%d", ft_atoi(argv[1]));
	return(0);
}
*/
/*
int	main()
{
	char st[] = "	";
	ft_atoi(st);

	    printf ("%d", ft_atoi(st));
	return(0);
}*/
