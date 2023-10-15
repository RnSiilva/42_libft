/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 03:06:48 by resilva           #+#    #+#             */
/*   Updated: 2023/10/15 03:26:56 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	len = strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// char	ft_change(unsigned int i, char c)
// {
// 	c = c - 1;
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str = "53Tdippm";
// 	printf("\nOld string: %s\nNew string: %s\n\n", 
// 	str, ft_strmapi(str, ft_change));
// 	return (0);
// }