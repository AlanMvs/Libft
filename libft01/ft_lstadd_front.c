/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:02:11 by amusaev           #+#    #+#             */
/*   Updated: 2024/01/23 18:04:53 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*current;

// 	t_list *myList = NULL; // Initialize an empty list
// 	// Create some nodes (without malloc)
// 	t_list node1, node2, node3;
//     int data1 = 1;
//     int data2 = 2;
//     int data3 = 3;
// 	node1.content = &data1;
// 	node2.content = &data2;
// 	node3.content = &data3;
// 	// Add nodes to the front of the list
// 	ft_lstadd_front(&myList, &node1);
// 	ft_lstadd_front(&myList, &node2);
// 	ft_lstadd_front(&myList, &node3);
// 	// Print the elements in the list
// 	current = myList;
// 	while (current != NULL)
// 	{
// 		printf("%d -> ", *((int *)current->content));
// 		current = current->next;
// 	}
// 	printf("NULL\n");
// 	return (0);
// }