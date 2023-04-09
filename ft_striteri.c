/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:51:05 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:13:58 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string iterator
/*ft_striteri modifies the original string in place based on a function.*/
/*function iterates through each character in a string 
and applies a function to each character.*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
	i = 0;
		while (s[i])
		{
			f(i, &s[i]);
		i++;
		}
	}
}
