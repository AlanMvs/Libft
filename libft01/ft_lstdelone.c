/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:17:06 by amusaev           #+#    #+#             */
/*   Updated: 2024/01/23 18:20:38 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

// int main(void)
// {
// 	t_list *element = ft_lstnew(strdup("Hello, World!")); 

// 	if (element == NULL)
// 	{
// 		printf("List element creation failed.\n");
// 		return (1);
// 	}
// 	printf("List element deleted.\n");

// 	return 0;
// }