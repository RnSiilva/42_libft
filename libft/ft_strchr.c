/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:33:58 by resilva           #+#    #+#             */
/*   Updated: 2023/10/15 02:51:57 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	char	*str = "42School42";
// 	printf("%s", ft_strchr(str, 'S'));
// 	return (0);
// }