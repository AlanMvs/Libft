/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:06:35 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:10:01 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*mem;

	total = count * size;
	if (count == 0 || size == 0)
	{
		mem = malloc(0);
		return (mem);
	}
	if (total / count != size)
		return (0);
	mem = malloc(total);
	if (!mem)
	{
		return (0);
	}
	ft_bzero(mem, total);
	return (mem);
}

// int main()
// {
//     size_t count = INT_MAX;
//     size_t size = INT_MAX;

//     int *arr = (int *)ft_calloc(count, size);

//     if (arr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     // Print the allocated array (should contain zeros)
//     printf("Allocated array: ");
//     for (size_t i = 0; i < count; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Free the allocated memory
//     free(arr);

//     return 0;
// }