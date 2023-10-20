/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:33:44 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:49 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = (char *)malloc(len_s1 + len_s2 + 1);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, len_s1);
	ft_memcpy(new_str + len_s1, s2, len_s2);
	new_str[len_s1 + len_s2] = '\0';
	return (new_str);
}

// int main()
// {
//     const char *prefix = "Hello, ";
//     const char *suffix = "World!";
//     char *result = ft_strjoin(prefix, suffix);

//     if (result != NULL)
//     {
//         printf("Concatenated string: %s\n", result);
//         free(result); // free the allocated memory
//     }
//     else
//     {
//         printf("Concatenated string is NULL (memory allocation failed).\n");
//     }

//     return 0;
// }