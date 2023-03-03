/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:38 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:19 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == '\0' && src == '\0')
	{
		return (0);
	}
	while (n--)
	{
		((char *)dst)[n] = ((char *)src)[n];
	}
	return (dst);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "abcdef";
// 	char s2[] = "def";
// 	printf("%s\n", ft_memcpy(s1, s2, 2));

// 	char s3[] = "abcdef";
// 	char s4[] = "def";
// 	printf("%s", memcpy(s3, s4, 2));
// 	return (0);
// }