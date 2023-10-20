/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:22:44 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:46 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
		while (len--)
			ptrdest[len] = ptrsrc[len];
	else
		while (len--)
			*(ptrdest++) = *(ptrsrc++);
	return (dst);
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dst[20];  // Create a destination buffer of 20 bytes

//     // Copy data from src to dst using ft_memmove
//     ft_memmove(dst, src, sizeof(src));

//     // Print the copied data
//     printf("Copied data: %s\n", dst);

//     return 0;
// }