//1- trimli karakter olup olmadığını anlamak için boolean function yaz
//2- starttan başlayıp son trimlenecek karaktere kadar git
//3- stringin sonuna kadar git, endden başlayıp son trimlenecek karaktere kadar geri git (-1 diye başlamayı unutma malum '\0' ya varacaksın)
//4- end - start yapıp return valuenun uzunluğunu al
//5- return value + 1 mallocla
//6- kopyala yapıştır bizi de alıştır

#include <stdlib.h>
#include <stdio.h>

int is_trimmed_char(char c, const char *set)
{
    int i = 0;
    while (set[i])
    {
        if (c == set[i])
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(const char *str, const char *set)
{
    int start = 0;
    int end = 0;
    int len = 0;
    int i = 0;
    char *res;

    while (str[start] && is_trimmed_char(str[start], set))
        start++;
    while (str[end])
        end++;
    while (start < end && is_trimmed_char(str[end - 1], set))
        end--;
    len = end - start;
    res = malloc(len + 1);
    if (res == NULL)
        return NULL;
    
    while (i < len)
    {
        res[i] = str[start + i];
        i++;
    }
    res[i] = '\0';

    return res;
}

/*
int main()
{
    printf("%s\n", ft_strtrim("ddddddhello worlddddddd", "d"));
    return 0;
}
*/