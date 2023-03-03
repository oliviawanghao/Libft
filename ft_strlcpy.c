/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:12 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:06 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// int main(void)
// {
// 	char *dst1;
// 	// char src1[] = ;
// 	printf("%zu\n", ft_strlcpy(dst1, "lorem ipsum", 0));
// 	printf("%s\n", dst1);
// 	char *dst2;
// 	// char src2[] = "lorem ipsum";
// 	printf("%zu\n", strlcpy(dst2,  "lorem ipsum", 0));
// 	printf("%s\n", dst2);
// 	return (0);
// }