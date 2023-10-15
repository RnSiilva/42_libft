/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 01:46:20 by resilva           #+#    #+#             */
/*   Updated: 2023/10/15 02:12:26 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*subst;

	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst || !s)
		return (NULL);
	i = start;
	j = 0;
	while (i < size && j < len)
		subst[j++] = s[i++];
	subst[j] = '\0';
	return (subst);
}

// int	main(void)
// {
// 	char	*str = "42School42";
// 	printf("%s", ft_substr(str, 8, 2));
// }