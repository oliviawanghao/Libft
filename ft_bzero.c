/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:53:24 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:36 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char *ptr = (char *)malloc((sizeof(char) * 5) + 1);
// 	ft_bzero(ptr, 5);

// 	for(int i = 0; i < 5; i++)
// 	{
// 		printf("%d\n", ptr[i]);
// 	}
// }