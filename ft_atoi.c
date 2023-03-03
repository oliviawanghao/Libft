/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:53:04 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:53:08 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while (*str != 0)
	{
		while (ft_isspace(*str))
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = sign * (-1);
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			nb = nb * 10 + (*str - '0');
			str++;
		}
		break ;
	}
	return (nb * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *s[18] = {"0", "546:5", "+548", "054854", "000074", "+-54",
// 		"-+48", "--47", "++47", "+47+5", "-47-5", "\e475", "\t\n\r\v\f  469 \n",
// 		"-2147483648", "2147483647", "\t\n\r\v\fd469 \n",
// 		"\n\n\n  -46\b9 \n5d6", ""};
// 	for(int i = 0; i < 18; i++)
// 	{
// 		printf("%i,", ft_atoi(s[i]));
// 		printf("%i\n", atoi(s[i]));
// 	}
// }