/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:46:49 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:06 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char		*dst;
	const char	*src;
	size_t		n;
	char		*test1;
	char		*test2;

	dst = "coucou";
	src = "balou";
	n = -5;

	test1 = (char *)ft_memcpy(dst, src, n);
	printf("%s\n", test1);
	test2 = (char *)memcpy(dst, src, 0);
	printf("%s\n", test2);
}
*/
