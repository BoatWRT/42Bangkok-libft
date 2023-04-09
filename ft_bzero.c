/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:20:30 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/02 12:25:41 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.*/
#include "libft.h"

void	ft_bzero(void *str, size_t num)
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (i < num)
	{
		((unsigned char *)str)[i] = 0;
		i++;
	}
}
