/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:44:43 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:31:50 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}

/*
#include <unistd.h>
int	main(void)
{
	char *str = "Cou;cou";
	int i = 0;

	while (str[i])
	{
		if (ft_isalpha(str[i]))
		{
			write (1, &str[i], 1);
			++i;
		}

		else
			return (0);
	}
	return (1);
}
*/
