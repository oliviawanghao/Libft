/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:02 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:11 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dup = (char *)malloc(i + 1);
	if (!dup)
		return (0);
	dup[i] = 0;
	while (i > 0)
	{
		i--;
		dup[i] = src[i];
	}
	return (dup);
}

// #include <stdio.h>
// int main() 
// {
// 	char str[] = "Hello Codam!";
// 	printf("%s", ft_strdup(str));
// }