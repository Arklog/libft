//
// Created by pierre on 10/19/24.
//

#ifndef FT_FT_DLIST_H
#define FT_FT_DLIST_H

#define FT_DLIST_NAME(type) ft_list_##type

#define FT_DLIST_CREATE(type) \
typedef struct ft_list_##type {              \
    type content;             \
    struct FT_DLIST_NAME(type) *next; \
} FT_DLIST_NAME(type);             \
                              \
FT_DLIST_NAME(type) ft_lst_new_##type(type *content) { \
    ft_list_##type nlist;     \
    nlist.content = *content; \
    nlist.next = NULL;        \
    return nlist;             \
}                             \
                              \
int ft_lst_##type##_add_back(FT_DLIST_NAME(type) *list, type *content) { \
    FT_DLIST_NAME(type) *nelem;                          \
    if (content == NULL)      \
        return 0;             \
    nelem = malloc(sizeof(FT_DLIST_NAME(type)));       \
    nelem->content = *content;\
    nelem->next = NULL;       \
    list->next = nelem;       \
    return 1;                              \
}                             \
                              \

#endif //FT_FT_DLIST_H
