#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    if (size > 0)
        dst[i] = '\0';
    
    while (src[i] != '\0')
        i++;
    
    return (i);
}


int main()
{
    char dest[10];
    const char source[25] = "patateslergonnabepatates";

    printf("%zu mine\n%s\n", ft_strlcpy(dest, source, 9), dest);
    return 0;
}