/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:00 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:27 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_minint(void)
{
	char	*ret;
	char	*min;

	min = "-2147483648";
	ret = (char *)malloc(13);
	if (!ret)
		return (0);
	ft_memcpy(ret, min, 12);
	return (ret);
}

char	*ft_tostring(char *ret, int n, int count)
{
	if (n < 0)
	{
		ret[0] = '-';
		n = n * (-1);
	}
	ret[count] = '\0';
	while (n >= 0)
	{
		ret[count - 1] = '0' + n % 10;
		n = n / 10;
		count--;
		if (n == 0)
			break ;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		count;
	int		temp;
	char	*ret;

	count = 1;
	temp = n;
	if (n == -2147483648)
		return (ft_minint());
	else if (n < 0)
		count++;
	while (temp > 9 || temp < -9)
	{
		temp = temp / 10;
		count++;
	}
	ret = (char *)malloc((count + 1));
	if (!ret)
		return (0);
	return (ft_tostring(ret, n, count));
}

// #include <stdio.h>
// int main()
// {
// 	int n[9] = {0, 9, -9, 10, 8124, -9874, 54300, -2147483648, 2147483647};
// 	for(int i = 0; i < 9; i++)
// 	{
// 		printf("%s, ", ft_itoa(n[i]));
// 	}
// }