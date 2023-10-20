/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:26:07 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:42 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if ((ptr[i]) == (unsigned char)c)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     const char *str = "Hell, Wrld!";
//     char search_char = 'o';
//     size_t n = 12;

//     void *result = ft_memchr(str, search_char, n);

//     if (result != NULL)
//     {
// 		printf("The '%c' at col:%ld\n", search_char, (char *)result - str);
//     }
//     else
//     {
//         printf("'%c' not found\n", search_char);
//     }

//     return 0;
// }