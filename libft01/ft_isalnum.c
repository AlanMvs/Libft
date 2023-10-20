/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:39:41 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:10:00 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

// int main() 
// {
//     char test_chars[] = {'9', '5', '%', '0', '$', '7', '-', 'z'};
//     int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

//     for (int i = 0; i < num_tests; i++) {
//         char c = test_chars[i];
//         if (ft_isalnum(c)) {
//             printf("Character '%c' is an alphanumeric character.\n", c);
//         } else {
//             printf("Character '%c' is not an alphanumeric character.\n", c);
//         }
//     }

//     return 0;
// }