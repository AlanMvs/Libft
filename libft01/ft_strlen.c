/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:32:40 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:51 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

// int main() 
// {
//     const char *str = "Hello, World!";
//     size_t length = ft_strlen(str);

//     printf("Length of the string: %zu\n", length);

//     return 0;
// }