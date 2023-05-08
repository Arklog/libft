/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:05:01 by pierre            #+#    #+#             */
/*   Updated: 2023/05/08 16:41:48 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_string.h"

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Return the uppercase equivalent of c
 * 
 * @param c 
 * @return The uppercase equivalent of c if c is lowercase, else return c
 */
int		ft_toupper(int c);

void	ft_putstrfd(const char *str, int fd);

char	**ft_splitcs(const char *str, const char *charset);

char	**ft_split(const char *str, int c);

t_list	*ft_lstnew(void *content);

void	ft_lstaddfront(t_list **lst, t_list *new);

void	ft_lstaddback(t_list **lst, t_list *new);

int		ft_lstsize(t_list	*lst);

t_list	*ft_lstlast(t_list	*lst);

int		ft_lstiteri(t_list *lst, int (*f)(size_t i, void *content));

#endif