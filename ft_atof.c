/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atof.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:11:39 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 17:32:31 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

double	get_float(const char *str)
{
	double	nb;
	double	d;
	int		i;

	nb = 0.0;
	d = 10.0;
	i = 0;
	while (ft_isdigit(*str) && i < 6)
	{
		nb = nb + (*str - '0') / d;
		d *= 10.0;
		str++;
		i++;
	}
	return (nb);
}

double	ft_atof(const char *str)
{
	double	sign;
	double	nb;

	sign = 1;
	nb = 0.0;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign = (-1.0);
		str++;
	}
	while (ft_isdigit(*str))
	{
		nb = nb * 10.0 + (*str - '0');
		str++;
	}
	if (*str == '.')
		str++;
	nb = nb + get_float(str);
	nb = nb * sign;
	return (nb);
}

// double	ft_atof(const char *str)
// {
// 	double	sign;
// 	double	nb;
// 	double	d;
// 	int		i;

// 	sign = 1;
// 	nb = 0.0;
// 	d = 10.0;
// 	i = 0;
// 	while (ft_isspace(*str))
// 		str++;
// 	if (ft_issign(*str))
// 	{
// 		if (*str == '-')
// 			sign = (-1.0);
// 		str++;
// 	}
// 	while (ft_isdigit(*str))
// 	{
// 		nb = nb * 10.0 + (*str - '0');
// 		str++;
// 	}
// 	if (*str == '.')
// 		str++;
// 	while (ft_isdigit(*str) && i < 6)
// 	{
// 		nb = nb + (*str - '0') / d;
// 		d *= 10.0;
// 		str++;
// 		i++;
// 	}
// 	nb = nb * sign;
// 	return (nb);
// }
