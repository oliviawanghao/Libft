/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:20 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:22 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*start;

	start = malloc(sizeof(*start));
	if (start == 0)
		return (0);
	start->content = content;
	start->next = 0;
	return (start);
}
