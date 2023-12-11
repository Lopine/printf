/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:27:18 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:05 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    *s1 = "123456.........";
	char	s2[] = "123456.....";;
    size_t  n = 50;

	int		test1;
	int		test2;

    test1 = ft_memcmp(s1, s2, n);
    printf("%d\n", test1);
    test2 = memcmp(s1, s2, n);
    printf("%d\n", test2);
}
*/
