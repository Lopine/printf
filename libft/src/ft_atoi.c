/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:31:18 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:31:26 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* C17 ballot 				SO/IEC 9899:2017				N2176
 * 								7.22.1	Numeric conversion functions
 * The function atoi need not affect the value of the integer expression 
 * errno on an error. 
 * If the value of the result cannot be represented, the behavior is undefined.
 *
 * 											Description
 * The atoi function convert the initial portion of the string pointed to by 
 * nptr to int representation.
 * Except for the behavior on error,they are equivalent to 
 * (int)strtol(nptr, (char**)NULL, 10).
 *
 * 											Returns
 * 	The atoi functions return the converted value.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		sign = 44 - *str++;
	while (ft_isdigit(*str))
	{
		nb *= 10;
		nb += *str++ - '0';
	}
	return (sign * nb);
}
/*
#include <limits.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("    ++++214"));
	printf("%d\n", ft_atoi("    2147483647"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("-2147483649"));
	printf("%d\n", atoi("   2147483647"));
}
*/
