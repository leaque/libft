#include <stdlib.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    char *str;

    str = (char *)s;
    while (n-- > 0)
    {
        *str++ = '\0';
    }
}

/*
int main()
{
    char z[11] = "zqwesafgq";
    char x[11] = "asdbcaqwe";

    printf("%s\n%s\n", z, x);

    ft_bzero(z, 10);
    ft_bzero(x, 10);
    printf("%s\n%s\n", z, x);

    return (0);
}
*/
