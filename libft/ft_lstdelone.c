/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:32:00 by resilva           #+#    #+#             */
/*   Updated: 2023/10/14 18:42:28 by resilva          ###   ########.fr       */
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_del(void *content)
{
	free(content);
}

int main(void)
{
    t_list *head = NULL;

    // Adicione elementos à lista
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    node1->content = strdup("Element 1");
    node1->next = NULL;
    head = node1;

    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2->content = strdup("Element 2");
    node2->next = NULL;
    node1->next = node2;

    // Exiba os elementos da lista antes de excluir
    printf("Lista antes da exclusão:\n");
    t_list *current = head;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Use ft_lstdelone para excluir um elemento (por exemplo, node1)
    ft_lstdelone(node2, ft_del);

    // Exiba a lista após a exclusão
    printf("\nLista após a exclusão:\n");
    current = head;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Lembre-se de liberar a memória dos elementos restantes na lista (node2)
    while (head)
    {
        t_list *temp = head;
        head = head->next;
        ft_lstdelone(temp, ft_del);
    }

    return 0;
}