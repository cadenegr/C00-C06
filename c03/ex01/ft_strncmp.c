/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:46:06 by cadenegr          #+#    #+#             */
/*   Updated: 2023/04/03 12:56:28 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	first[] = "Hello";
	char	second[] = "Heyya";

	printf("%d", strncmp(first, second, 2));
	printf("\n%d", ft_strncmp(first, second, 2));

    char    first1[] = "Helloa";
    char    second1[] = "Helloz";

    printf("\n%d", strncmp(first1, second1, 6));
    printf("\n%d", ft_strncmp(first1, second1, 6));
	return(0);
}*/
