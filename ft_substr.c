//s stringi içerisinde 'start' ile başlayıp 'len +1' kadar allocatelenen memory returnle.
//1- stringin uzunluğunu bul
//2- eğer başlangıç stringin dışındaysa veya length yoksa return NULL
//3- gereken stringin uzunluğunu bul
//4- return value için malloc / malloc faillarsa return = NULL
//5- index lengthe verene kadar copy-paste
//6- chill

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t strlen = ft_strlen(s);
    char *ret;
    size_t i = 0;
    size_t sub_len;

    if ((start >= strlen) || (len <= 0))
        return NULL;
    if (start + len > strlen)
        sub_len = strlen - start;
    else
        sub_len = len;
    ret = malloc(len + 1);
    if (ret == NULL)
        return NULL;
    while(i < sub_len)
    {
        ret[i] = s[start + i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}


/*int main()
{
    int i = 2;

    printf("%s\n", ft_substr("abcdefgh", i, 6));
    return (0);
}
*/