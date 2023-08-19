//integer overflow var mı bak (nmemb != 0 && size > (size_t) - 1 / nmemb)
//toplam size'ı hesapla toplam = nmemb * size
//malloc
//memset
//return

#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    ptr = (unsigned char*)s;
    while (n > 0)
    {
        *ptr = (unsigned char)c;
        n--;
        ptr++;
    }

    return (s);
}

void *calloc(size_t nmemb, size_t size)
{
    size_t total_size;
    void *ptr;

    if (nmemb != 0 && size > (size_t) - 1 / nmemb)
        return (0);
    
    total_size = nmemb * size;
    ptr = malloc(total_size);

    if (ptr)
    {
        ft_memset(ptr, 0, total_size);
        return (ptr);
    }
    return (0);
}