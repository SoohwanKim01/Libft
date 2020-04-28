/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:25:29 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:25:29 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_len(int n)
{
	unsigned int i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char					*ft_itoa(int n)
{
	char			*ptr;
	int				len;
	int				minus;
	unsigned int	nbr;

	len = ft_len(n);
	minus = 0;
	nbr = n;
	if (!(ptr = malloc(sizeof(char) * (len + 1))))
		return (0);
	if (n < 0)
	{
		minus = '-';
		nbr = n * (-1);
	}
	ptr[len] = '\0';
	while (--len >= 0)
	{
		ptr[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (minus)
		ptr[0] = '-';
	return (ptr);
}
