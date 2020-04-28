/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:25:50 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:25:50 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char   *dest;
	size_t i;

	dest = s;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
