#include <unistd.h>

// Compare two strings
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

// Swap two pointers to strings
void ft_swap(char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Print a string
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    int i;
    int sorted = 0;

    while (!sorted)
    {
        sorted = 1;
        i = 1;
        while (i < argc - 1)
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                ft_swap(&argv[i], &argv[i + 1]);
                sorted = 0;
            }
            i++;
        }
    }

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return 0;
}
