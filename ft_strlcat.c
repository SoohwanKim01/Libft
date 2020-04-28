/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:17 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:17 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_len;
	size_t src_len;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	dst_len = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	src_len = i;
	i = 0;
	while (size > dst_len + j + 1 && src[j] != '\0')
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	if (size < dst_len)
		return (src_len + size);
	else
		return (src_len + dst_len);
}
