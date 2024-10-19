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
static FT_DLIST_NAME(type) *ft_lst_new_##type(type content) { \
    ft_list_##type *nlist;    \
    nlist = malloc(sizeof(FT_DLIST_NAME(type)));       \
    if (nlist == NULL)        \
        return NULL;                          \
    nlist->content = content; \
    nlist->next = NULL;        \
    return nlist;             \
}                             \
                              \
static int ft_lst_##type##_add_back(FT_DLIST_NAME(type) **list, type content) { \
    FT_DLIST_NAME(type) *nelem;              \
    nelem = ft_lst_new_##type(content);      \
    if (nelem == NULL)        \
        return 0;             \
    else if (!*list) {          \
        *list = nelem;        \
        return 1;                          \
    }\
    (*list)->next = nelem;       \
    return 1;                              \
}                             \
                              \
static unsigned int ft_lst_##type##_size(FT_DLIST_NAME(type) *list) { \
    unsigned int size;        \
    FT_DLIST_NAME(type) *tmp; \
    size = 0;                 \
    tmp = list;               \
    while (tmp != NULL) {     \
        size++;               \
        tmp = tmp->next;      \
    }                         \
    return size;              \
}                             \
                              \
static void ft_lst_##type##_free(FT_DLIST_NAME(type) *list, void (*data_free)(type)) { \
    FT_DLIST_NAME(type) *tmp;                          \
    for (int i = 0; i < ft_lst_##type##_size(list); ++i) {                \
        tmp = list->next;     \
        data_free(list->content);            \
        free(list);           \
        list = tmp;                          \
    }                              \
}                             \

#endif //FT_FT_DLIST_H
