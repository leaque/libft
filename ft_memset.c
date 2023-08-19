#include <stddef.h>
#include <stdio.h>

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

/*int main()
{
    char z[11];
    char x[11] = "asdbcaqwe";

    ft_memset(z, 90, 10);
    ft_memset(x, 90, 10);

    printf("%s\n%s\n", z, x);
    return (0);
}
*/