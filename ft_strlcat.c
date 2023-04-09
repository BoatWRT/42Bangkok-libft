/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:27:02 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:14:49 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (i < size - dest_len - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src [i];
	i++;
	}
	dest[dest_len + i] = '\0';
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
