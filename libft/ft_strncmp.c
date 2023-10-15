/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:10:16 by resilva           #+#    #+#             */
/*   Updated: 2023/10/15 01:43:04 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	int	n;
// 	char	s1[] = "42School";
// 	char	s2[] = "42School";

// 	n = 4;
// 	printf("ft_: %d\n", ft_strncmp(s1, s2, n));
// 	printf("orig: %d\n", strncmp(s1, s2, n));
// 	return (0);
// }