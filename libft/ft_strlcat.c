/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:35:20 by resilva           #+#    #+#             */
/*   Updated: 2023/10/14 21:51:19 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ldt;
	size_t	lsr;
	size_t	lens;

	i = 0;
	lens= 0;
	ldt = strlen(dst);
	lsr = strlen(src);
	if (size > ldt)
		lens = ldt + lsr;
	else
		return (lsr + size);
	while (src[i] && (ldt + 1) < size)
		dst[ldt++] = src[i++];
	dst[ldt] = '\0';
	return (lens);
}

// int	main(void)
// {
// 	char	src[] = "Programming";
// 	char	dest[100] = "42 School of ";
// 	unsigned int	size = 25;

// 	size = ft_strlcat(dest, src, size);
// 	printf("size: %d\ndest: %s\n", size, dest);
// 	return (0);
// }