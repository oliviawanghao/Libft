/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_space_split.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 17:08:05 by hwang         #+#    #+#                 */
/*   Updated: 2023/03/13 17:19:59 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int	word_count(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (is_space(*str))
			str++;
		if (*str == '\0')
			break ;
		while (*str && !is_space(*str))
			str++;
		count++;
	}
	return (count);
}

int	word_len(char *str)
{
	int	len;

	len = 0;
	while (*str && !is_space(*str))
	{
		len++;
		str++;
	}
	return (len);
}

char	*word_dup(char *str)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = word_len(str);
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	fill_words(char **ret, char *str)
{
	int	index;

	index = 0;
	while (is_space(*str))
		str++;
	while (*str)
	{
		ret[index] = word_dup(str);
		index++;
		while (*str && !is_space(*str))
			str++;
		while (*str && is_space(*str))
			str++;
	}
}

char	**ft_space_split(char *str)
{
	int		word_c;
	char	**ret;

	word_c = word_count(str);
	ret = malloc(sizeof(char *) * (word_c + 1));
	ret[word_c] = 0;
	fill_words(ret, str);
	return (ret);
}
