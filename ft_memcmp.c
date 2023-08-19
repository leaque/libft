#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *string1;
    unsigned char *string2;

    string1 = (unsigned char *)s1;
    string2 = (unsigned char *)s2;
    
    while (n > 0)
    {
        if (*string1 != *string2)
            return (*string1 - *string2);
        string1++;
        string2++;
        n--;
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_memcmp("bCxzb", "bbbn", 15));
    return 0;
}