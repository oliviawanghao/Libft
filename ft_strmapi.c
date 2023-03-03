/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:18 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:04 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		count;
	int		i;

	if (!s)
		return (0);
	count = ft_strlen(s);
	ret = (char *)malloc(count + 1);
	if (!ret)
		return (0);
	ft_bzero(ret, count + 1);
	i = 0;
	while (i < count)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}

// ret = ft_calloc(count + 1, sizeof(char));
// 为什么要把所有的memory都填上零？？