/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:26:49 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:10:03 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * sign);
}

// int main()
// {
//     const char *str1 = "12345";
//     const char *str2 = "	 -42 is the answer";
//     const char *str3 = "Hello, World!";
//     const char *str4 = "2147483648"; 
// // Maximum positive int value will give the negative of this value

//     int num1 = ft_atoi(str1);
//     int num2 = ft_atoi(str2);
//     int num3 = ft_atoi(str3);
//     int num4 = ft_atoi(str4);

//     printf("String: \"%s\" -> Integer: %d\n", str1, num1);
//     printf("String: \"%s\" -> Integer: %d\n", str2, num2);
//     printf("String: \"%s\" -> Integer: %d\n", str3, num3);
//     printf("String: \"%s\" -> Integer: %d\n", str4, num4);

//     return 0;
// }