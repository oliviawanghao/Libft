/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:10 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:07 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst && i < dstsize)
	{
		i++;
		dst++;
	}
	while (*src && i + 1 < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	if (i < dstsize)
	{
		*dst = '\0';
	}
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[10] = "abcopq";
// 	char s2[] = "def";
// 	int a = ft_strlcat(s1, s2, 10);
// 	printf("%d", a);
// 	printf("%s", s1);	
// 	char s3[10] = "abcopq";
// 	char s4[] = "def";
// 	int b = strlcat(s3, s4, 10);
// 	printf("%d", b);
// 	printf("%s", s3);
// 	return (0);
// }