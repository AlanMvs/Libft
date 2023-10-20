/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:06:48 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:16:16 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}

// int main()
// {
// 	const char *str = "   This is a test string.   ";
// 	const char *set = "   This";

// 	char *result = ft_strtrim(str, set);

// 	if (result != NULL)
// 	{
// 		printf("Original string: '%s'\n", str);
// 		printf("Trimmed string:  '%s'\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Trimmed string is NULL (memory allocation failed).\n");
// 	}

// 	return 0;
// }