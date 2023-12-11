/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:52:01 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:10 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char	*str;

	c = (unsigned char) c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = c;
		++str;
		--n;
	}
	return (s);
}

/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	unsigned int	dest[20];
	int	c = 'A';
	size_t	count = 0;

	printf("%s", (char *) memset(dest, c, count));
	return (0);
}
*/
