/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:22:17 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:37 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sf;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	sf = malloc(sizeof(char) * (len + 1));
	if (!sf)
		return (NULL);
	while (i < len)
	{
		sf[i] = f(i, s[i]);
		++i;
	}
	sf[i] = '\0';
	return (sf);
}
/*
int	main(void)
{
	char const	s[] = "ALLO"
	
}
*/
