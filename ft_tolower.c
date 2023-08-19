int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (c);
}

/*int main()
{
    char s = 'S';
    printf("%d\n", ft_tolower(s));
    return 0;
}
*/