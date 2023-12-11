/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:54:46 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:39 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while ((*str1 || *str2) && n-- > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		++str1;
		++str2;
	}
	return (0);
}
/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	const char	*s1 = "coutou";
	const char	*s2 = "cougou";
	size_t		n = 4;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}
*/
