/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:24 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:02 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcheck(const char *haystack, const char *needle,
						size_t h, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*ret;

	i = 0;
	j = 0;
	ret = (char *)haystack;
	while (i + h <= len && len != 0)
	{
		j = 0;
		n = i;
		while (haystack[n] == needle[j] && j < h)
		{
			n++;
			j++;
		}
		if (needle[j] == '\0')
			return (ret);
		ret++;
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;

	if (!*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (0);
	h = ft_strlen(needle);
	return (ft_strcheck(haystack, needle, h, len));
}

// #include <stdio.h>
// int main()
// {
// 	char s1[30] = "aaabcabcd";
// 	char s2[10] = "aabc";
// 	char *empty = (char*)"";
// 	printf("%s\n", ft_strnstr(empty, "coucou", -1));
// 	printf("%s\n", ft_strnstr(s1, "aaabc", 5));
// 	printf("%s\n", ft_strnstr(s1, "abcd", 9));
// 	printf("%s\n", ft_strnstr(s1, "a", 1));
// 	printf("%s\n", "--------------");
// 	printf("%s\n", strnstr(empty, "coucou", -1));
// 	printf("%s\n", strnstr(s1, "aaabc", 5));
// 	printf("%s\n", strnstr(s1, "abcd", 9));
// 	printf("%s\n", strnstr(s1, "a", 1));
// }