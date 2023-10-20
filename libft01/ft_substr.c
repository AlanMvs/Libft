/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:49:07 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:55 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	dst = malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int main()
// {
//     const char *str = "Hello, World!";
//     unsigned int start = 7;
//     size_t len = 5;

//     char *result = ft_substr(str, start, len);

//     if (result != NULL)
//     {
//         printf("Substring: %s\n", result);
//         free(result); // free the allocated memory
//     }
//     else
//     {
//         printf("Substring is NULL (memory allocation failed).\n");
//     }

//     return 0;
// }