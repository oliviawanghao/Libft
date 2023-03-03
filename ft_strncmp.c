/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:20 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:03 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "test\200";
// 	char s2[] = "test\0";
// 	printf("%d\n", ft_strncmp(s1, s2, 6));
// 	printf("%d\n", strncmp(s1, s2, 6));
// 	char s3[] = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char s4[] = "\x12\x02";
// 	printf("%d\n", ft_strncmp(s3, s4, 6));
// 	printf("%d\n", strncmp(s3, s4, 6));
// 	return (0);
// }