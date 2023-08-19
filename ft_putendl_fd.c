#include <unistd.h>

void    ft_putendl_fd(const char *str, int fd)
{
    if (fd < 0 || !str)
        return ;
    const char *ptr;
    ptr = str;

    while (*ptr)
    {
        write(fd, ptr, 1);
        ptr++;
    }
    write(fd,'\n', 1);
}