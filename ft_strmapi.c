#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int len = 0;
    unsigned int i = 0;
    char *res;

    if (s == NULL || f == NULL)
        return NULL;
    while (s[len])
        len++;
    
    res = malloc(len + 1);
    if (res == NULL)
        return NULL;

    while (i < len)
    {
        res[i] = f(i, s[i]);
        i++;
    }

    res[len] = '\0';
    free(res);
    
    return res;
}

/*
int main() {
    int num = -12345;
    char *str = ft_itoa(num);

        printf("%d\n", num);
        printf("%s\n", str);

    return 0;
}
*/
