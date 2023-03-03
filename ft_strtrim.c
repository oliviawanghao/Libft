/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:31 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:55:59 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	size_t	i;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup((char *)s1));
	i = ft_strlen((char *)s1) - 1;
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "          ";
// 	char set[] = " ";
// 	printf("%s", ft_strtrim(s1, set));
// }
// 如果s1经过第一轮筛选，全被pass了，则不能return(0)，需要return一个char的null terminator。