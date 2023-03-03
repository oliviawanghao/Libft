/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:34 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:55:58 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toolong(void)
{
	char	*sub;

	sub = malloc(1 * sizeof(char));
	if (!sub)
		return (0);
	*sub = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_toolong());
	if (ft_strlen(s) - start < len)
		slen = ft_strlen(s) - start;
	else
		slen = len;
	sub = malloc((slen + 1) * sizeof(char));
	if (!sub)
		return (0);
	i = 0;
	while (i < slen && start + i < ft_strlen(s))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "abcdefg";
// 	printf("%s", ft_substr(str, 2, 4));
// }
// 什么情况会 allocation fail？？
// 如果*s == '\0'，那应该return (0)还是 return (sub)？