/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:47:19 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:50 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dest && size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	if (i >= size)
		return (ft_strlen(src) + size);
	while (i + j < size - 1 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int main()
// {
//     char dest[20] = "Hello, ";
//     char src[] = "World!";
//     size_t total_len;

//     // Concatenate src to dest using ft_strlcat
//     total_len = ft_strlcat(dest, src, sizeof(dest));

//     // Print the concatenated string and its total length
//     printf("Concatenated string: %s\n", dest);
//     printf("Total length: %zu\n", total_len);

//     return 0;
// }