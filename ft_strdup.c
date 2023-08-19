#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    if (size > 0)
        dst[i] = '\0';
    
    while (src[i] != '\0')
        i++;
    
    return (i);
}

char *ft_strdup(const char *s)
{
    char *res;
    size_t s_len;

    if (!s)
        return (0);
    s_len = ft_strlen(s);
    res = malloc((s_len + 1) * sizeof(char));
    if (!res)
    {
        errno = ENOMEM;
        return (0);
    }
    ft_strlcpy(res, s, s_len + 1);
    return (res);
}

int main()
{
    char z[50] = "allahkitap";
    printf("%s\n", ft_strdup(z));
    return 0;
}