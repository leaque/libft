#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = dest;
    s = src;

    if (d == s || n == 0)
        return dest;
    
    if (d > s && d < s + n)
    {
        d = d + n;
        s = s + n;
        while (n)
        {
            d--;
            s--;
            *d = *s;
            n--;
        }
    }
    else
    {
        while (n)
        {
            *d = *s;
            d++;
            s++;
            n--;
        }
    }

    return (dest);
}