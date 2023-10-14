/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:11:59 by resilva           #+#    #+#             */
/*   Updated: 2023/10/14 16:13:04 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	char	*str;
// 	t_list	*new;
// 	t_list	*new2;

// 	str = "Renan";
// 	printf("\n\t>>> TESTING WITH NON-NULL CONTENT <<<\n\n");
// 	new = ft_lstnew(str);
// 	printf("The inputed string was: \'%s\'\n", (char *)new->content);

// 	printf("\n\t>>> TESTING WITH NULL CONTENT <<<\n\n");
// 	new2 = ft_lstnew(NULL);
// 	printf("The inputed string was: '%s'\n", (char *)new2->content);
// }