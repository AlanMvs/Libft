/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:13:44 by amusaev           #+#    #+#             */
/*   Updated: 2024/01/23 18:13:55 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main() {
//     // Create a linked list
//     struct Node* head = NULL; // Initialize an empty list

//     // Add nodes to the list (for demonstration)
//     // You can add nodes to the list as needed
//     // ...

//     // Call the function to find the last node
//     struct Node* lastNode = findLastNode(head);

//     // Check if the last node was found
//     if (lastNode != NULL) {
//         printf("The last node contains data: %d\n", lastNode->data);
//     } else {
//         printf("The list is empty.\n");
//     }

//     return 0;
// }