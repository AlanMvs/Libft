/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:09:15 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:10:02 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (n-- > 0)
	{
		*(ptr++) = 0;
	}
}

// int main() 
// {
//     char buffer[20];  // Create a buffer of 20 bytes
//     size_t buffer_size = sizeof(buffer);

//     // Fill the buffer with 'A' initially
//     ft_memset(buffer, 'A', buffer_size);

// 	// Display the buffer before and after zeroing
// 	printf("Buffer before ft_bzero: %s\n", buffer);

//     // Zero out the buffer using ft_bzero
//     ft_bzero(buffer, buffer_size);

//     // Display the buffer after zeroing
// 	printf("Buffer after ft_bzero: %s\n", buffer);

//     return 0;
// }