#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n > 0)
    {
        if (!*s2 || !*s1 || *s1 != *s2)
            return ((unsigned char)*s1 - (unsigned char)*s2);
        s1++;
        s2++;
        n--;
    }
    return (0);
}

/*int main()
{
    printf("%d\n", ft_strncmp("alla", "", 5));
    return 0;
}
*/