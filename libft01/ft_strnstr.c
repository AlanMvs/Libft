/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:11:56 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:53 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str2, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!*str2)
		return ((char *)str);
	while (a < len && str[a] != '\0')
	{
		if (str[a] == str2[0])
		{
			while (str2[b] != '\0' && str[a + b] == str2[b] && a + b < len)
			{
				if (str2[b + 1] == '\0')
					return ((char *)&str[a]);
				b++;
			}
		}
		a++;
	}
	return (0);
}
// int	main(void)
// {
// 	const char	*str1;
// 	const char	*str2;
// 	char		*result;

// 	str1 = "lorem ipsum dolor sit amet";
// 	str2 = "ipsum";
// 	result = ft_strnstr(str1, str2, 15);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }