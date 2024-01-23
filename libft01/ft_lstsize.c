/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:07:33 by amusaev           #+#    #+#             */
/*   Updated: 2024/01/23 18:13:08 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     // Create list elements
//     t_list *head = ft_lstnew("First element");
//     t_list *second = ft_lstnew("Second element");
//     t_list *third = ft_lstnew("Third element");
// 	t_list *fourth = ft_lstnew("Fourth element");

//     // Link the elements together
//     head->next = second;
//     second->next = third;
// 	third->next = fourth;

//     // Calculate the size of the list
//     int size = ft_lstsize(head);
//     // Print the size
//     printf("The list size is: %d\n", size);
// 	return(0);
// }