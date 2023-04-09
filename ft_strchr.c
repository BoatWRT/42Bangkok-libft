/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:41:32 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:09:45 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//string character
/*return a pointer to the first occurence 
of the character c in the string s*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
