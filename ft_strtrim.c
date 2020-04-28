/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:40 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:40 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1_len;
	char	*s2;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_check(set, *s1) == 1)
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len > 0 && ft_check(set, s1[s1_len - 1]) == 1)
		s1_len--;
	if (!(s2 = malloc(sizeof(char) * (s1_len + 1))))
		return (0);
	while (s1[i] && i < s1_len)
	{
		s2[j++] = s1[i++];
	}
	s2[j] = '\0';
	return (s2);
}
