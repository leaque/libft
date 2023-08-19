#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (0);
    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }

    if (c == '\0')
        return (char *)s;

    return (0);
}

/*int main()
{
    printf("%s\n", ft_strchr("patates", 97));
    return 0;
}
*/