/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:49:58 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:54 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int main()
// {
//     const char *str = "Hello, Worldo!";
//     int search_char = 'o';

//     char *result = ft_strrchr(str, search_char);

//     if (result != NULL)
//     {int main()
// {
//     const char *str = "Hello, Worldo!";
//     int search_char = 'o';

//     char *result = ft_strrchr(str, search_char);

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
//         printf("Found '%c' at position: %ld\n", search_char, result - str);
//     }
//     else
//     {
//         printf("'%c' not found in the string\n", search_char);
//     }

//     return 0;
// }