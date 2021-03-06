/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmokabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:03:46 by tlmokabo          #+#    #+#             */
/*   Updated: 2020/07/15 12:40:08 by tlmokabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while(src[i])
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return dest;
}
