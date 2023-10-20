/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:19:41 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:16:17 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// int main() 
// {
//     char test_chars[] = {'A', 'b', '5', '$', 'Z', '!', 'c'};
//     int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

//     for (int i = 0; i < num_tests; i++) {
//         char c = test_chars[i];
//         if (ft_isalpha(c)) {
//             printf("Character '%c' is an alphabetic character.\n", c);
//         } else {
//             printf("Character '%c' is not an alphabetic character.\n", c);
//         }
//     }

//     return 0;
// }