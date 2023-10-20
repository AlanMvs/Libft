/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:47:03 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:51 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dstsize > 0)
	{
		while (src[i] && (i + 1 < dstsize))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dst[20];  // Create a destination buffer of 20 characters
//     size_t copied_len;

//     // Copy data from src to dst using ft_strlcpy
//     copied_len = ft_strlcpy(dst, src, sizeof(dst));

//     // Print the copied data and the length of src
//     printf("Copied data: %s\n", dst);
//     printf("Length of src: %zu\n", copied_len);

//     return 0;
// }