/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:40:25 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:34 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dst[] = "1234";
	const char	src[] = "4321";
	size_t	dstsize = 5;

	size_t	cpy1;
    cpy1 = ft_strlcpy(dst, src, dstsize);
	size_t	cpy2 = strlcpy(dst, src, dstsize);

	printf("%zu\n", cpy1);
	printf("%zu\n", cpy2);
}
*/
