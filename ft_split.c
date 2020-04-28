/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:26:02 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:26:02 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_num(char const *s, char c)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if ((i > 0 && s[i - 1] == c && s[i] != c) || (i == 0 && s[i] != c))
			nb++;
		i++;
	}
	return (nb);
}

static	int		ft_word_len(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
		else
			return (len);
		i++;
	}
	return (len);
}

static	char	**free_ptr(char **ptr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
	ptr = NULL;
	if (!s)
		return (NULL);
	if (!(ptr = (char **)malloc(sizeof(char *) * (ft_num(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if ((s[i - 1] == c && s[i] != c) || (i == 0 && s[i] != c))
		{
			if (!(ptr[j] = ft_substr(s, i, (ft_word_len(&s[i], c)))))
				return (free_ptr(ptr, j));
			j++;
		}
		i++;
	}
	ptr[j] = NULL;
	return (ptr);
}
