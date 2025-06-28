
#include <unistd.h>

// Function to write a single character
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Function to display an integer
void ft_putnbr(int nb)
{
    if (nb == -2147483648) // Handle the smallest int value
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0) // Handle negative numbers
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) // Recursive call for numbers >= 10
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0'); // Write the last digit
}
