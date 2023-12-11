/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:26:43 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:51 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*s;
	size_t			len;
	unsigned int	start;
	size_t			end;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	if (start == len)
		return (ft_strdup(""));
	end = len - 1;
	while (ft_strchr(set, s1[end]))
		--end;
	s = ft_substr(s1, start, (end - start) + 1);
	if (!s)
		return (NULL);
	return (s);
}
/*
#include <stdio.h>
int main (void)
{
	char const	s1[] = "  \t \t \n   \n\n\n\t";
	char const	set[] = "\n \t";
	char		*s;

	s	= ft_strtrim(s1, set);
	printf("%s\n", s);

	return (0);
}
*/
