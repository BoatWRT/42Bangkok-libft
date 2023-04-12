/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:42:37 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/02 13:55:28 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*used to copy a block of memory from one location to another.
It is similar to the memcpy() function
 but with an added feature to handle overlapping memory regions.*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
		}
	}
	return (dest);
}
