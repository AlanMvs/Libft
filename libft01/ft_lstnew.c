/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:01:51 by amusaev           #+#    #+#             */
/*   Updated: 2024/01/23 18:02:02 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main() {
//     // Create a new t_list node with some content
//     int data = 10;
//     t_list *node = ft_lstnew(&data);

//     // Check if the node was created successfully
//     if (node) {
//         printf("Node created successfully.\n");
//         printf("Content: %d\n", *(int *)(node->content));

//         // Don't forget to free the memory allocated for the node
//         free(node);
//     } else {
//         printf("Failed to create a new node.\n");
//     }

//     return (0);
// }