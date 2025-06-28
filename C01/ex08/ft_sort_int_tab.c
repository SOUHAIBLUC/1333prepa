#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swp;

    while (size >= 0)
	{
         i = 0
         while (i < size-1)
         {
            i = 0
            if (tab[i] > tab[i+1])
            {
                swp = tab[i];
                tab[i] = tab[i+1];
                swp = tab[i+1];
            }
            i++;
        }
        size--;
    }
}