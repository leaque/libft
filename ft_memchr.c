#include <stdio.h>
#include <string.h>

void *memchr(const void *s, int c, size_t n)
{
    char *string;

    string = (char *)s;
    while (n > 0)
    {
        if (*string == (char)c)
            return (string);
        n--;
        string++;
    }
    return (NULL);
}