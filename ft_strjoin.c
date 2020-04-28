/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:12 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:12 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
    int		size;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (0);
	if (!(ptr = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
