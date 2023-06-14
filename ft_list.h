/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:58:34 by pducloux          #+#    #+#             */
/*   Updated: 2023/06/14 16:50:06 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <sys/types.h>
# include <stdlib.h>

# include "ft_string.h"

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);

void	ft_lstaddfront(t_list **lst, t_list *new);

void	ft_lstaddback(t_list **lst, t_list *new);

int		ft_lstsize(t_list	*lst);

t_list	*ft_lstlast(t_list	*lst);

int		ft_lstiteri(t_list *lst, int (*f)(size_t i, void *content));
#endif