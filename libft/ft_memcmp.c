/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:52:23 by resilva           #+#    #+#             */
/*   Updated: 2023/10/14 22:57:43 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	n;
// 	char	s1[] = "42School";
// 	char	s2[] = "42School";

// 	n = 4;
// 	printf("ft_: %d\n", ft_memcmp(s1, s2, n));
// 	printf("orig: %d\n", memcmp(s1, s2, n));
// 	return (0);
// }