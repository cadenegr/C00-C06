/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:14:34 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/29 15:50:15 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[50] = "back";
	char dest[50] = "front";

    char src1[50] = "back";
    char dest1[50] = "front";

	printf ("%s",  ft_strcat(dest, src));
	printf ("\n%s", strcat(dest1, src1));
	return (0);
}*/
