/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:33:31 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/04 09:41:53 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	n;

	n = 0;
	if (dstsize == 0)
		return (NULL);
	else
	{
		while (src[n] != '\0' && n < dstsize)
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	return ((size_t)ft_strlen(src));
}

int	main(void)
{
	
}