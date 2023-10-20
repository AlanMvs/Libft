/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:17:05 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:41 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// int main() {
//     char test_chars[] = { 'A', '7', ' ', '*', '\n', 128, 31, 'z' };
//     int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

//     for (int i = 0; i < num_tests; i++) {
//         char c = test_chars[i];
//         if (ft_isprint(c)) {
//             printf("Character '%c' is a printable character.\n", c);
//         } else {
//             printf("Character '%c' is not a printable character.\n", c);
//         }
//     }

//     return 0;
// }