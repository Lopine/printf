/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:55:03 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:43 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	c = (unsigned char) c;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (len-- > 0)
	{
		if (*(s + len) == c)
			return ((char *)s + len);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;
	int			c;
	const char	*s1;
	const char	*s2;

	s = "oucou sisi la famille";
	c = '\0';
	s1 = (const char *)ft_strrchr(s, c);
	s2 = (const char *)strrchr(s, c);
	printf("%s\n", s1);
	printf("%p\n", s1);
	printf("%s\n", s2);
	printf("%p\n", s2);
	return (0);
}
*/