/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:25:33 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:25:33 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned char		*ptr_src;
	unsigned char		find_c;
	size_t				i;


	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	find_c = (unsigned char)c;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		if (ptr_src[i] == find_c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
