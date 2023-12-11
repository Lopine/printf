/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:46:13 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:03 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *) s;
	c = (unsigned char) c;
	while (n--)
	{
		if (*str == c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char	src[] = "bonjourno";
    int		c = 'n';
	size_t	n = 2;
	char	*s1;
	char	*s2;

    s1 = ft_memchr(src, c, n);
    printf("%s\n", s1);
    s2 = memchr(src, c, n);
    printf("%s\n", s2);
}
*/
