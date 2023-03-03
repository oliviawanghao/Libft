/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:34 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:19 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "abcde";
// 	char s2[] = "abcdef";
// 	printf("%d\n", ft_memcmp(s1, s2, 6));
// 	printf("%d", memcmp(s1, s2, 6));
// }