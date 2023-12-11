/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:08:35 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:31:55 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <unistd.h>
int	main (void)
{
	int c = 3;

	if (ft_isdigit(c))
		write (1, "digit", 6);
	else 
		write (1, "is not digit", 13);
}
*/
