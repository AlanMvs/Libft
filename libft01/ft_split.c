/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:04:17 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:14:47 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(const char *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			num++;
		i++;
	}
	return (num);
}

static int	split_words(char **result, const char *s, char c, int word)
{
	int	start_i;
	int	end_i;

	start_i = 0;
	end_i = 0;
	while (s[end_i])
	{
		if (s[end_i] == c || s[end_i] == 0)
			start_i = end_i + 1;
		if (s[end_i] != c && (s[end_i + 1] == c || s[end_i + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (end_i - start_i + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + start_i), end_i - start_i + 2);
			word++;
		}
		end_i++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
}

// int	main(void)
// {
// 	char const	*s;
// 	char		c;
// 	char		**result;
// 	int			i;

// 	s = "string to split";
// 	c = ' ';
// 	result = ft_split(s, c);
// 	i = 0;
// 	if (result)
// 	{
// 		while (result[i] != NULL)
// 		{
// 			printf("Word %d: %s\n", i, result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("ft_split failed\n");
// 	}
// 	return (0);
// }