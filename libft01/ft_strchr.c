/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:23:14 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:47 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == '\0' && c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main()
// {
//     const char *str = "Helli, World!";
//     int search_char = 'o';

//     char *result = ft_strchr(str, search_char);

//     if (result != NULL)
//     {
//         printf("Found '%c' at position: %ld\n", search_char, result - str);
//     }
//     else
//     {
//         printf("'%c' not found in the string\n", search_char);
//     }

//     return 0;
// }