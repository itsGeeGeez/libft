// Return string or character?

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    const char *str;

    str = s;
    while (*str)
    {
        if (*str == c)
            return ((char *)str);
        str++;
    }
    return (NULL);
}