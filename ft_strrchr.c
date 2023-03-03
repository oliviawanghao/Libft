/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:28 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:00 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ret;
	char		d;

	d = (char)c;
	ret = s;
	while (*s != '\0')
		s++;
	while (s >= ret)
	{
		if (*s == d)
			return ((char *)s);
		s--;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "bonjour";
// 	printf("%s\n", ft_strrchr(s1, 's'));
// 	// printf("%s\n", ft_strrchr(s1, '\0'));
// 	char *s2 = "bonjour";
// 	printf("%s\n", strrchr(s2, 's'));
// 	// printf("%s\n", strrchr(s2, '\0'));
// 	return (0);
// }