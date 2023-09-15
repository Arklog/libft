#ifndef FT_LIST_TYPE_H
# define FT_LIST_TYPE_H

typedef union __attribute((transparent_union)) u_list {
	struct s_list {
		void			*content;
		struct s_list	*next;
	} *list;
}	t_list;

#endif
