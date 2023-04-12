/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:56:57 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/02 13:59:30 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memset() function fills the first n bytes of the memory
 area pointed to by s with the constant byte c.*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
