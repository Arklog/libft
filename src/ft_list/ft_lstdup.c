#include "ft_list.h"
#include "ft_string.h"

t_list	*ft_lstdup(t_list *lst, void *(*dup)(void *))
{
	t_list	*new;
	t_list	*iter;

	new = NULL;
	iter = lst;
	while (iter)
	{
		ft_lstaddback(&new, ft_lstnew(dup(iter->content)));
		iter = iter->next;
	}
	return (new);
}
