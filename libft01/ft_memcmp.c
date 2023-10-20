/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:01:46 by amusaev           #+#    #+#             */
/*   Updated: 2023/10/20 15:09:43 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, int n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = s1;
	ptr2 = s2;
	while (n > 0)
	{
		if (*ptr != *ptr2)
			return (*ptr - *ptr2);
		n--;
		ptr++;
		ptr2++;
	}
	return (0);
}

// int main()
// {
//     const char *str1 = "ABC";
//     const char *str2 = "ACC";
//     size_t n = 3;

//     int result = ft_memcmp(str1, str2, n);

//     if (result < 0)
//         printf("'%s' < '%s' in the first %lu chars\n", str1, str2, n);
//     else if (result > 0)
//         printf("'%s' > '%s' in the first %lu chars\n", str1, str2, n);
//     else
//         printf("'%s' == '%s' in the first %lu chars\n", str1, str2, n);

//     return 0;
// }