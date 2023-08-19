#include <stddef.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}



/*int main()
{
	const char z[512] = "1234567890";
	printf("%zu\n", ft_strlen(z));
	return 0;
}
*/