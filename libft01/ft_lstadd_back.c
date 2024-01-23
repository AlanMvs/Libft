/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:16:12 by amusaev           #+#    #+#             */
/*   Updated: 2024/01/23 18:16:33 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

// int	main(void)
// {
// 	t_list *list = NULL; // Initialize an empty list

// 	// Create some nodes and add them to the list
// 	t_list *node1 = ft_lstnew(1);
// 	t_list *node2 = ft_lstnew(2);
// 	t_list *node3 = ft_lstnew(3);

// 	// Add nodes to the end of the list
// 	ft_lstadd_back(&list, node1);
// 	ft_lstadd_back(&list, node2);
// 	ft_lstadd_back(&list, node3);

// 	// Print the linked list
// 	printf("Linked List: ");
// 	printList(list);

// 	return (0);
// }