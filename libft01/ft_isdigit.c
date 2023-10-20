/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:01:35 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:37 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int main() 
// {
//     char test_chars[] = {'9', '5', 'A', '0', '$', '7', '2'};
//     int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

//     for (int i = 0; i < num_tests; i++) {
//         char c = test_chars[i];
//         if (ft_isdigit(c)) {
//             printf("Character '%c' is a digit.\n", c);
//         } else {
//             printf("Character '%c' is not a digit.\n", c);
//         }
//     }

//     return 0;
// }