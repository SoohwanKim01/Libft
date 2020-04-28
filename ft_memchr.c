/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:25:35 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:25:35 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t				i;

	ptr = (unsigned char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void*)(ptr + i));
		i++;
	}
	return (NULL);
}
