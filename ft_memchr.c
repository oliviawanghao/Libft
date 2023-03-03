/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:29 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:20 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((void *)s);
		}
		s++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char s[] = "abcdef";
// 	printf("%s\n", ft_memchr(s, 99, 4));
// 	printf("%s", memchr(s, 99, 4));
// }