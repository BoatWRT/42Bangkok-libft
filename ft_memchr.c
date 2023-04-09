/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:12:45 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:06:09 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//searches a block of memory for a specific character.
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = str;
	i = 0;
	while (i < n)
	{
		if (*p == (unsigned char) c)
			return ((void *) p);
	p++;
	i++;
	}
	return (NULL);
}
