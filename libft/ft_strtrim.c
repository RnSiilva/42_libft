/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:35:19 by resilva           #+#    #+#             */
/*   Updated: 2023/10/15 03:06:29 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	str = ft_substr(s1, 0, i + 1);
	if (!str)
		return (NULL);
	return (str);
}

// int	main(void) 
// {
//     const char	str[] = "   Hello, World!   ";
//     printf("%s", ft_strtrim(str, " "));
//     return 0;
// }
