/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:41 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:18 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	return (dst);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "abcdef";
// 	char s2[] = "def";
// 	printf("%s\n", ft_memmove(s1, s2, 2));

// 	char s3[] = "abcdef";
// 	char s4[] = "def";
// 	printf("%s", memmove(s3, s4, 2));
// 	return (0);
// }