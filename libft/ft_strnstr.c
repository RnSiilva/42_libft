/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:51:35 by resilva           #+#    #+#             */
/*   Updated: 2023/10/14 22:15:03 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == '\0')
		return ((char *)big);
	n = strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && strncmp(big, little, n) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str = "42School is a school of programming";
	
// 	printf("%s", ft_strnstr(str, "is", 15));
// 	return (0);
// }