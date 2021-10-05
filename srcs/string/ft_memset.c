/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:31:41 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/05 14:49:24 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	char			*result;
	unsigned int	n;

	n = 0;
	result = (char *)b;
	while (n < len)
	{
		result[n] = (unsigned char)c;
		n++;
	}
}
