/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:44:48 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:47 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = (unsigned char *)b;
	uc = (unsigned char)c;
	while (len-- > 0)
	{
		*(ptr++) = uc;
	}
	return (b);
}

// int main() 
// {
//     char buffer[5];  // Create a buffer of 20 bytes
//     size_t buffer_size = sizeof(buffer);
//     // Fill the buffer with 'A' using ft_memset
//     ft_memset(buffer, 'P', buffer_size);
//     // Print the contents of the buffer
//     printf("Buffer contents: %s\n", buffer);

//     return 0;
// }