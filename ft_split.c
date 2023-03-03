/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:57 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:13 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(char *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while (*s != c && *s != '\0')
			s++;
		n++;
	}
	return (n);
}

void	ft_writestr(char **ret, char *tmp, int slen)
{
	int	i;

	*ret = (char *)malloc(slen + 1);
	if (!ret)
		return ;
	i = 0;
	while (i < slen)
	{
		**ret = *tmp;
		(*ret)++;
		tmp++;
		i++;
	}
	**ret = '\0';
	(*ret) -= i;
}

char	**ft_strsplit(char **ret, char const *s, char c, int retc)
{
	int		slen;
	char	*tmp;

	while (*s)
	{
		slen = 0;
		while (*s == c)
			s++;
		tmp = (char *)s;
		while (*s != c && *s != '\0')
		{
			slen++;
			s++;
		}
		ft_writestr(&ret[retc], tmp, slen);
		while (*s == c && *s)
			s++;
		retc++;
	}
	ret[retc] = 0;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		strcount;
	char	**ret;
	int		retc;

	if (!s)
		return (0);
	retc = 0;
	strcount = ft_strcount((char *)s, c);
	ret = malloc((strcount + 1) * sizeof(char *));
	if (!ret)
		return (0);
	if (strcount == 0)
	{
		ret[retc] = 0;
		return (ret);
	}
	else
		return (ft_strsplit(ret, s, c, retc));
}

// #include <stdio.h>
// int main()
// {
// 	char **test;
// 	char a;
// 	a = ' ';
// 	char str1[] = "cabcdeccfgccchcc";
// 	char str2[] = "          ";
// 	char str4[] = "          a     ";
// 	char str5[] = "a         ";
// 	char str6[] = "         a";
// 	char str7[] = "tripouy";
// 	test = ft_split(str2, a);
// 	while (*test)
// 		printf("%s\n", *test++);
// }