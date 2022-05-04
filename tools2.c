#include "push_swap.h"

int	lst_size(t_list *stack)
{
	int	i;

	i = 1;
	while (stack && i++)
		stack = stack->next;
	return (i - 1);
}

t_list  *lst_last(t_list *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

int pos_of_index(t_list *head, int index)
{
    int pos;

    pos = 0;
    
    while (head->index != index)
    {
        head = head->next;
        pos++;
    }
    return (pos);
}