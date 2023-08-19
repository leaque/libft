#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    char buffer[11];
    int i = 0;

    if (n == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        n = 147483648;
    }

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }

    if (n == 0)
    {
        ft_putchar_fd('0', fd);
        return;
    }

    while (n)
    {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    }

    while (i > 0)
    {
        ft_putchar_fd(buffer[--i], fd);
    }
}
