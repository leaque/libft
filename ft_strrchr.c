char *ft_strrchr(const char *s, int c)
{
    char *last_occurrence = 0;
    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = (char *)s;
        s++;
    }

    if (c == '\0')
        return (char *)s;

    return (last_occurrence);
}

/*int main()
{
    printf("%s\n", ft_strrchr("patates", 97));
    return 0;
}
*/