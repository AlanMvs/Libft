/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:04:29 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:57 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
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
//     printf("Orig: %c, Upper: %c\n", lower, ft_toupper(lower));

//     // Test ft_toupper with uppercase character
//     printf("Orig: %c, Upper: %c\n", upper, ft_toupper(upper));

//     // Test ft_toupper with non-alphabetic character
//     printf("Orig: %c, Upper: %c\n", non_alpha, ft_toupper(non_alpha));

//     return 0;
// }