/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:55:05 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:10 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		count;
	int		i;

	if (!s)
		return ;
	count = ft_strlen(s);
	i = 0;
	while (i < count)
	{
		f(i, &(s[i]));
		i++;
	}
}
