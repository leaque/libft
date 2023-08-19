#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    else
        return (c);
}


/*int main()
{
    char s = 's';
    printf("%d\n", ft_toupper(s));
    return 0;
}
*/