#include <unistd.h>

int main(int argc, char **argv)
{
    int v = 1;
    int i;

    while (v < argc)
    {
        i = 0;
        while (argv[v][i] != '\0')
        {
            write(1, &argv[v][i], 1);
            i++;
        }
        write(1, "\n", 1);
        v++;
    }
    return 0;
}
