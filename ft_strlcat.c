/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:27:02 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 15:11:13 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = dest_len;
	i = 0;
	while (dest_len < size - 1 && size > 0)
	{
		dest[j] = src[i];
	j++;
	i++;
	}
	dest[dest_len + i] = '\0';
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
