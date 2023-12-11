/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:04:02 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:08 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	if (d < s)
		ft_memcpy(dst, src, n);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char		src[] = "123456.....";
    char		src2[] = "123456.....";
    size_t		n = 4;

    ft_memmove(src+3, src, n);
    printf("%s\n", src);
    memmove(src2+3, src2, n);
    printf("%s\n", src2);
}
*/
