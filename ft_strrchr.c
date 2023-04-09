/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:42:48 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:16:32 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string reverse search for character
/*return a pointer to the last occurence 
of the character c in the string s*/
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence = (NULL);

	while (*str)
	{
		if (*str == (char)c)
			last_occurrence = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)last_occurrence);
}
