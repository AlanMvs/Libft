/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:22:46 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:48 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;

	i = 1;
	while (s1[i - 1])
		i++;
	dst = malloc(sizeof(*s1) * i);
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int main()
// {
//     const char *original = "Hell, World!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Original string: %s\n", original);
//     printf("Duplicate string: %s\n", duplicate);

//     free(duplicate);

//     return 0;
// }