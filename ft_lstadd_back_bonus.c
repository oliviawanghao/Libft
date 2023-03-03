/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: hwang <hwang@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:54:02 by hwang         #+#    #+#                 */
/*   Updated: 2022/10/19 16:56:27 by hwang         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

//#include <stdio.h>
//int    main(void)
//{
//    char    s1[] = "first";
//    char    s2[] = "second";
//    char    s3[] = "third";
//    t_list    *top;
//    t_list    *item;
//    t_list    *current;
//    void    *p;
//
//    p = (char *)s1;
//    top = ft_lstnew(p);
//    p = (char *)s2;
//    item = ft_lstnew(p);
//    ft_lstadd_back(&top, item);
//
//    p = (char *)s3;
//    item = ft_lstnew(p);
//    ft_lstadd_front(&top, item);
//    current = top;
//    while (current != NULL)
//    {
//        printf("%s\t", (char *)current->content);
//        current = current->next;
//    }
//    return (0);
//}
