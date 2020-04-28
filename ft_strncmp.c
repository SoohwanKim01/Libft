/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:32 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:32 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t				i;

	i = 0;
    ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n && ptr1[i] != '\0' && ptr2[i] != '\0')
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	if (ptr1[i] != ptr2[i] && i != n)
		return (ptr1[i] - ptr2[i]);
	return (0);
}
