/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:08:49 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/20 14:22:43 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	while (i <= (size - 1))
	{
		k = 0;
		while (k < (size - i - 1))
		{
			if (tab[k] > tab[k + 1])
			{
				temp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = temp;
			}
			k++;
		}
		i++;
	}
}
/*
int	main()
{
	int	str[] = {7, 9, 5, 1, 4, 2, 3};
	int	size = 7;
	int	j;

	j = 0;
	while (str[j])
	{
		j++;
	}
	size = j;

//	ft_putchar(size + '0');
//	write (1, "\n", 1);

	ft_sort_int_tab(str, size);

	j = 0;
	while (j <= (size - 1))
	{
		ft_putchar(str[j] + '0');
		j++;
	}
	return (0);
}*/
