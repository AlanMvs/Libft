/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:55:02 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:44 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptrsrc;
	unsigned char		*ptrdest;
	int					i;

	i = 0;
	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dst;
	if (ptrdest == 0 && ptrsrc == 0)
	{
		return (0);
	}
	while (n != 0)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
		n--;
	}
	return (ptrdest);
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dst[20];  // Create a destination buffer of 20 bytes

//     // Copy data from src to dst using ft_memcpy
//     ft_memcpy(dst, src, sizeof(src));

//     // Print the copied data
//     printf("Copied data: %s\n", dst);

//     return 0;
// }