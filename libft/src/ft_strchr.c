/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:47:38 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:21 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char) c;
	if (c == '\0')
		return ((char *) &s[ft_strlen(s)]);
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		++s;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("strchr\n");
	printf("%p\n", strchr("coucou", 1024));
	printf("%s\n", strchr("coucou", 1024));

	printf("ft_strchr\n");
	printf("%p\n", ft_strchr("coucou", 1024));
	printf("%s\n", ft_strchr("coucou", 1024));
}
*/
