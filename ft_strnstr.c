/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:35 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:35 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	big_len;
	size_t	size;

	if (*little == 0)
		return ((char *)big);
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (big_len < little_len || len < little_len)
		return (0);
	size = big_len > len ? len : big_len;
	while (size-- >= little_len)
	{
		if (ft_memcmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
