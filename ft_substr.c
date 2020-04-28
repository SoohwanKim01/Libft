/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:43 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:43 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

    if (s == NULL)
    	return (NULL);
    new_s = (char *)malloc(sizeof(char) * len + 1);
    if (new_s == NULL)
    	return (NULL);
    i = 0;
    while (i < len && s[start] != '\0')
    {
    	new_s[i] = s[start];
    	i++;
    	start++;
    }
    new_s[i] = '\0';
    return (new_s);
}