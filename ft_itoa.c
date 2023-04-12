/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:35:16 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:29:36 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parameters: n: the integer to convert.
Return value The string representing the integer.
NULL if the allocation fails.*/

/*Description: Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/

#include "libft.h"

size_t	check_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;
	long	numb;

	len = check_len(n);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	numb = (long)n;
	if (n == 0)
		ptr[0] = '0';
	numb = (long)n;
	if (numb < 0)
	{
		ptr[0] = '-';
		numb = numb * -1;
	}
	while (numb > 0)
	{
		len--;
		ptr[len] = numb % 10 + 48;
		numb = numb / 10;
	}
	return (ptr);
}
