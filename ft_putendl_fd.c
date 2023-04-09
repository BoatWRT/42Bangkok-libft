/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:00:47 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:08:18 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//same as ft_putchar_fd but put \n at the end
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s[i])
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
	i++;
	}
	write(fd, "\n", 1);
}
