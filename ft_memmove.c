#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t count)
{
    unsigned char	*s;
    unsigned char	*d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    if (s < d)
        while (count--)
            d[count] = s[count];
    else
        while (count--)
            d[count] = s[count];
    return (dest);
}
