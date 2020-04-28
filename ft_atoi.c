/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 06:24:48 by sookim            #+#    #+#             */
/*   Updated: 2020/04/28 06:24:48 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long	result;
	int			minus;

	minus = 1;
	result = 0;
	while (*nptr && ((*nptr >= 9 && *nptr <= 13) || *nptr == 32))
		++nptr;
	if (*nptr == '-' || *nptr == '+')
	{
        if (*nptr == '-')
		    minus = -1;
    	++nptr;
    }
    while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		++nptr;
	}
	return (result * minus);
}
