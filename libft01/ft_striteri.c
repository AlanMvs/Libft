/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusaev <amusaev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:06:12 by amusaev           #+#    #+#             */
/*   Updated: 2024/01/23 17:12:50 by amusaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void prev_ascii(unsigned int i, char *c)
// {
//     if(c[i] >= 0 && c[i] <= 127)
//     {
//         if (c[i] == 127) {
//             c[i] = 0;
//         } else {
//             (*c)--;
//         }
//     }
// }
// int	main(void)
// {
// 	char	str1[] = "abcdasva";
//     ft_striteri(str1,prev_ascii);
// 	printf("%s\n", str1);
//     return (0);
// }
// void next_alpha(unsigned int i, char *c)
// {
//     if(c[i] >= 0 && c[i] <= 127)
//     {
//         if (c[i] == 127) {
//             c[i] = 0;
//         } else {
//             (*c)++;
//         }
//     }
// }