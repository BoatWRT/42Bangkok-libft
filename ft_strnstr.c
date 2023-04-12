/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:40:06 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/02 15:42:23 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//"string not found in string of limited length"
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	char	*ptr;

	ptr = (char *) haystack;
	if (*needle == 0)
		return (ptr);
	if (len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	i = 0;
	while ((ptr[i] != '\0') && ((i + needle_len) <= len))
	{
		if (ft_strncmp(&ptr[i], needle, needle_len) == 0)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
