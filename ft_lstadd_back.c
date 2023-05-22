#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return NULL;

    while (lst->next != NULL)
        lst = lst->next;

    return lst;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return;

    if (*lst == NULL)
    {
        *lst = new;
        return;
    }

    t_list *last = ft_lstlast(*lst);
    last->next = new;
}

void putin(t_list **list, char *p)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->content = p;
    new_node->next = NULL;
    ft_lstadd_back(list, new_node);
}

int main()
{
    // İlk bağlı listeyi oluşturma
    t_list *list = NULL;

    putin(&list, "Node 1");
    putin(&list, "Node 2");
    putin(&list, "Node 3");

    // Bağlı listeyi yazdırma
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s\n", (char *)(current->content));
        current = current->next;
    }

    // Belleği temizleme
    current = list;
    while (current != NULL)
    {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
