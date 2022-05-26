#include "libft.h"

int ft_count_word(char const *s, char c)
{
    int count;
    int i;
    int hit;

    count = 0;
    i = 0;
    hit = 0;
    if (!s[i])
        return (0);
    while (s[i])
    {
        if (s[i] == c)
            hit = 1;
        if (s[i] != c && hit == 1)
        {
            count++;
            hit = 0;
        }
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    int word_count;
    unsigned char **string;
    int i;

    if (!s)
        return (NULL);
    word_count = ft_count_word(s, c);
    string = malloc(sizeof(*string) * (word_count + 1));
    if (!string)
        return (NULL);
    i = 0;
    while (word_count-- > 0)
    {
        while (s[i] && s[i] == c)
            i++;
    }
}