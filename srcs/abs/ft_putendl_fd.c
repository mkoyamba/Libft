/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:00:59 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/05 13:29:57 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	n;

	n = 0;
	if (fd < 0)
		return ;
	if (!s || s[0] == '\0')
		return ;
	while (s[n])
		write(fd, s[n], 1);
	write(1, "\n", 1);
}
