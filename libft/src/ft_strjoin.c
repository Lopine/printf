/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:12:17 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:31 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = malloc (sizeof(char) * (s1_len + s2_len + 1));
	if (!s)
		return (NULL);
	ft_memcpy(s, s1, s1_len);
	ft_memcpy(s + s1_len, s2, s2_len + 1);
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char const	s1[] = "Tu ne vaincras jamais ";
	char const	s2[] = "GANON !!!";
	char		*s;
	char		*sref;

	s = ft_strjoin(s1, s2);
	printf("%s\n", s);
	free((void *)s); 
	
	sref = ft_strjoin(s1, s2);
	printf("%s\n", sref);
	free((void *)sref); 
	return (0);
}
*/
