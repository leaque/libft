#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t i;

    i = 0;
    dst_len = ft_strlen(dst);

    if (dst_len >= size)
        return (size + ft_strlen(src));

    while (i < size - dst_len - 1 && src[i] != '\0')
    {
        dst[dst_len + i] = src[i];
        i++;
    }

    dst[dst_len + i] = '\0';

    return (dst_len + ft_strlen(src));
}

/*
int main()
{
    char dest[50] = "allahgonbeallah";
    const char source[25] = "patateslergonnabepatates";

    printf("%zu mine\n%s\n", ft_strlcat(dest, source, 50), dest);
    return (0);
}
*/
