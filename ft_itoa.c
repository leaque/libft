#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
    int num = n;
    int digits = 1;
    int sign = 0;
    int i;
    char *res;

    while (num / 10 != 0)
    {
        num = num /10;
        digits++;
    }

    if (n < 0)
    {
        sign = 1;
        digits = digits + 1;
    }

    res = malloc(digits + 1);
    if (res == NULL)
        return NULL;
    
    res[digits] = '\0';

    if (n < 0)
    {
        res[0] = '-';
        n = -n;
    }

    i = digits - 1;
    while (i >= sign)
    {
        res[i] = '0' + (n % 10);
        n = n / 10;
        i--;
    }

    return (res);
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
