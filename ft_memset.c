/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:44 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:17 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
	{
		((unsigned char *)b)[len] = (unsigned char)c;
	}
	return (b);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char *ptr = (char *)malloc((sizeof(char) * 5) + 1);
// 	int c = 'c';
// 	ft_memset(ptr, c, 5);

// 	for(int i = 0; i < 5; i++)
// 	{
// 		printf("%c\n", ptr[i]);
// 	}
// }