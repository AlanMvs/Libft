/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:47:18 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:36 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int main() 
// {
//     char test_chars[] = { 'A', '7', '*', '\n', 128, 32, 'z' };
//     int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

//     for (int i = 0; i < num_tests; i++) {
//         char c = test_chars[i];
//         if (ft_isascii(c)) {
//             printf("Character '%c' is an ASCII character.\n", c);
//         } else {
//             printf("Character '%c' is not an ASCII character.\n", c);
//         }
//     }

//     return 0;
// }
