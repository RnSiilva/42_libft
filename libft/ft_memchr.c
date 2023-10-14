/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:46:30 by resilva           #+#    #+#             */
/*   Updated: 2023/10/14 22:51:49 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "42School42";
// 	char	str2[] = "42School42";
// 	printf("ft_: %s\n", (char *)(ft_memchr(str, 'S', 8)));
// 	printf("orig: %s\n", (char *)(memchr(str2, 'S', 8)));
// 	return (0);
// }