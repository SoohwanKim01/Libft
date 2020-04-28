/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:09 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:09 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(s);
	result = (char*)malloc((length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < length)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
