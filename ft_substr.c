#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
    unsigned char   *string;
    size_t          i;
    size_t          j;

    string = malloc(sizeof(*s) * (len + 1));
    if (!string)
        return (NULL);
    while (s[i])
    {
        if (i >= start && j < len)
        {
            string[j] = s[i];
            j++;
        }
        i++;
    }
    string[j] = 0;
    return (string);
}