#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t little_len;
    size_t j;

    i = 0;
    little_len = ft_strlen(little);

    if (!*little)
        return ((char *)big);
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] && (i + j) < len && big[i + j] == little[j])
        {
            j++;
            if (j == little_len)
                return ((char *)(&big[i]));
        }
        i++;
        len--;
    }
    return (0);   
}

/*int main()
{
    printf("%s\n", ft_strnstr("patatezdemdemebana", "deme", 125));
}
*/