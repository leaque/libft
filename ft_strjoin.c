//1-ilk 2 stringin uzunluğunu hesapla
//2-toplam uzunluğu hesapla
//3- malloc / if res = null return = null
//4 - s1'den res'e kopyala
//5 - s2'den res'e kopyala
//6- '\0' koy sona returnle


#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int len_s1 = ft_strlen(s1);
    int len_s2 = ft_strlen(s2);
    int total_len = len_s1 + len_s2;
    char *res;
    int i = 0;
    int j = 0;

    if (!s1 || !s2)
        return (0);
    res = malloc(total_len + 1);
    if (res == NULL)
        return NULL;
    while (i < len_s1)
    {
        res[i] = s1[i];
        i++;
    }
    while (j < len_s2)
    {
        res[i + j] = s2[j];
        j++;
    }
    res[i + j] = '\0';

    return (res);
}

/*int main()
{
    printf("%s\n", ft_strjoin("hello", "world"));
    return 0;
}
*/