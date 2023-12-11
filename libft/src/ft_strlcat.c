/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:09:42 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:33 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcat() function returns the total length of the string that would 
 * have been created if there was unlimited space. This might or might not be 
 * equal to the length of the string actually created, depending on whether 
 * there was enough space. This means that you can call strlcat() once to find
 *  out how much space is required, then allocate it if you do not have enough,
 *  and finally call strlcat() a second time to create the required string.
*/

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	else
		ft_strlcpy(dst + dstlen, src, dstsize - dstlen);
	return (dstlen + srclen);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
//	size_t  	dstsize = 1;
//    const char  *src = "lorem ipsum dolor sit amet";


    size_t		cat1;
	char		*dst1 = NULL;

    cat1 = ft_strlcat(dst1, "abcd", 0);
    printf("%zu\n", cat1);
	printf("%s\n", dst1); 
    cat1 = ft_strlcat(dst1, "abcd", 2);
    printf("%zu\n", cat1);
	printf("%s\n", dst1); 
    cat1 = ft_strlcat(dst1, "abcd", 3);
    printf("%zu\n", cat1);
	printf("%s\n", dst1); 
    cat1 = ft_strlcat(dst1, "abcd", 4);
    printf("%zu\n", cat1);
	printf("%s\n", dst1); 
    cat1 = ft_strlcat(dst1, "abcd", 5);
    printf("%zu\n", cat1);
	printf("%s\n", dst1); 
    cat1 = ft_strlcat(dst1, "abcd", 6);
    printf("%zu\n", cat1);
	printf("%s\n", dst1); 
    cat1 = ft_strlcat(dst1, "abcd", 7);
    printf("%zu\n", cat1);
	printf("%s\n\n\n", dst1); 


//    char    dst2[10] = "a";
    size_t		cat2;
	char		dst2[] = "pqrstuvwxyz";

	cat2 = strlcat(dst2, "abcd", 1);
    printf("%zu\n", cat2);
	printf("%s\n", dst2); 
	cat2 = strlcat(dst2, "abcd", 2);
    printf("%zu\n", cat2);
	printf("%s\n", dst2); 
	cat2 = strlcat(dst2, "abcd", 3);
    printf("%zu\n", cat2);
	printf("%s\n", dst2); 
	cat2 = strlcat(dst2, "abcd", 4);
    printf("%zu\n", cat2);
	printf("%s\n", dst2); 
	cat2 = strlcat(dst2, "abcd", 5);
    printf("%zu\n", cat2);
	printf("%s\n", dst2); 
	cat2 = strlcat(dst2, "abcd", 6);
    printf("%zu\n", cat2);
	printf("%s\n", dst2); 
	cat2 = strlcat(dst2, "abcd", 7);
    printf("%zu\n", cat2);
	printf("%s\n", dst2); 
}
*/
