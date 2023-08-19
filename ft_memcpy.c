#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void* src, size_t n)
{
    unsigned char *d_ptr;
    const unsigned char *s_ptr;

    d_ptr = (unsigned char *)dest;
    s_ptr = (const unsigned char*)src;
    while (n-- > 0)
    {
        *d_ptr = *s_ptr;
        d_ptr++;
        s_ptr++;
    }
    return (dest);
}

/*int main()
{
    char z[11];
    char x[11] = "asdbcaqwe";

    ft_memset(x, 90, 10);

    printf("%s\n", z);

    ft_memcpy(z, x, 10);
    printf("%s\n", z);
    return (0);
}
*/
