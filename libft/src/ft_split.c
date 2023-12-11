/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:47 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:19 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free (tab[i++]);
	free (tab);
	return (NULL);
}

static char	**newtab(char const *s, char c)
{
	char			**tab;
	unsigned int	row;

	row = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++row;
		while (*s && *s != c)
			++s;
	}
	tab = malloc(sizeof(char *) * (row + 1));
	if (!tab)
		return (NULL);
	tab[row] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char			**tab_split;
	unsigned int	i;
	unsigned int	row;
	unsigned int	start;

	if (!s)
		return (NULL);
	tab_split = newtab(s, c);
	row = 0;
	i = 0;
	while (tab_split && s[i])
	{
		while (s[i] && s[i] == c)
			++i;
		start = i;
		while (s[i] && s[i] != c)
			++i;
		if (i > start)
		{
			tab_split[row] = ft_substr(s, start, i - start);
			if (!tab_split[row++])
				return (free_tab(tab_split));
		}
	}
	return (tab_split);
}
/*
#include <stdio.h>
int	main(void)
{
	char const	s[] = "hello!zzzzzzzzzz";
	char		 c = 'z';
	char		**tab;
	int			i;

	tab = ft_split(s, c);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		++i;
	}
}
*/
