/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:22:21 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/02 14:40:21 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
		count++;
		}
	str++;
	}
	return (count);
}

static char	*get_next_word(const char *str, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
	i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		s++;
		else
		{
		result[i] = get_next_word(s, c);
			if (!result[i++])
				free(result);
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = (NULL);
	return (result);
}
