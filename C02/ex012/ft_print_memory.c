void ft_putchar(char c)
{
    write(1, &c, 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    char *ptr = (char *)addr;
    unsigned int i = 0;

    while (i < size)
    {
        if (ptr[i] >= 32 && ptr[i] <= 126)
        {
            ft_putchar(ptr[i]);
        }
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[(unsigned char)ptr[i] / 16]);
            ft_putchar("0123456789abcdef"[(unsigned char)ptr[i] % 16]);
        }
        i++;
    }
    return addr;
}
