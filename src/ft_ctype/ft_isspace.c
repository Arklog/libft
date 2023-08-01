#include "ft_ctype.h"
#include "ft_string.h"

int ft_isspace(int c)
{
    static const char   *spaces = "\t\n\v\f\r ";

    return (ft_strchr(spaces, c) != NULL);
}