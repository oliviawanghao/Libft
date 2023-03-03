/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:00 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:12 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char)c;
	while (*s && *s != d)
		s++;
	if (*s == d)
		return ((char *)s);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "tripouille";
// 	printf("%s\n", ft_strchr(s1, 'z'));
// 	printf("%s\n", ft_strchr(s1, '\0'));
// 	printf("%s\n", ft_strchr(s1, 't' + 256));
// 	char *s2 = "tripouille";
// 	printf("%s\n", strchr(s2, 'z'));
// 	printf("%s\n", strchr(s2, '\0'));
// 	printf("%s\n", strchr(s1, 't' + 256));
// 	printf("test.....%c\n", 't' + 256);
// 	return (0);
// }
// 如果是'z'，没找到，则return(0)，表示啥也没有，printf打印出来是(null);
// 如果是'\0'，则返回一个类型为char的terminater，printf啥也打印不出来。