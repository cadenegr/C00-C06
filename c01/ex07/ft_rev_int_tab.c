/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:22:14 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/19 18:23:27 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int	main()
{
	int	str[] = {3, 4, 2, 9, 7, 1};
	int	size = 6;
	int	j;
	ft_rev_int_tab(str, size);
	
	j = 0;
	while (j < size)
	{
		ft_putchar(str[j] + '0');
		j++;
	}
	return (0);
}
