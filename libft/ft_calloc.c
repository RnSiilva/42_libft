/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:23:37 by resilva           #+#    #+#             */
/*   Updated: 2023/10/14 23:46:14 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*p;
// 	p = (int *)ft_calloc(5, sizeof(int));

// 	int	i = -1;
// 	while (++i < 5)
// 		printf("Adress p%i: %p | Value p%i: %i\n", i, (p+i), i, *(p+i));
// 	return (0);
// }