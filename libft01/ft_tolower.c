/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:17:50 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:56 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

// int main() 
// {
//     int lower = 'x';
//     int upper = 'H';
//     int non_alpha = '$';

//     // Test ft_toupper with lowercase character
//     printf("Orig: %c, Lower: %c\n", lower, ft_tolower(lower));

//     // Test ft_toupper with uppercase character
//     printf("Orig: %c, Lower: %c\n", upper, ft_tolower(upper));

//     // Test ft_toupper with non-alphabetic character
//     printf("Orig: %c, Lower: %c\n", non_alpha, ft_tolower(non_alpha));

//     return 0;
// }