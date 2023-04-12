/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:53:31 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/02 15:23:27 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*s1: The prefix string.
  s2: The suffix string.*/

/*Return Value: The new string
NULL if the allocation fails*/

/*Allocates (with malloc(3)) and returns a newstring,
which is the result of concatenation
of 's1' and 's2'*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*catstr;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	catstr = (char *)malloc(
			sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!catstr)
		return (NULL);
	while (s1[i])
	{
		catstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		catstr[i + j] = s2[j];
	j++;
	}
	catstr[i + j] = 0;
	return (catstr);
}
