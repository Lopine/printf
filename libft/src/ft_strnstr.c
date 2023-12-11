/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:24:54 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:41 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	str_len;
	size_t	substr_len;

	if (!str && n == 0)
		return (NULL);
	str_len = ft_strlen(str);
	substr_len = ft_strlen (substr);
	if (n > str_len)
		n = str_len;
	while (n >= substr_len)
	{
		if (ft_strncmp(str, substr, substr_len) == 0)
			return ((char *)str);
		++str;
		--n;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str[] = "Je m'appelle Pauline";
	const char	substr[] = "Pauline";
	size_t		n = 0;
	
//	char	*s1 = ft_strnstr(((void *)0), "fake", 0);
//	printf("%s\n", s1);

	char	*s2 = strnstr(((void *)0), "fake", -1);
	printf("%s\n", s2);

	return (0);
}
*/
