#include <unistd.h>

void ft_print_comb (void)
{
    int x = 0;
    int y;
    int z;

    while (x <= 7) // First digit
    {
        y = x + 1; // Reset y to x + 1
        while (y <= 8) // Second digit
        {
            z = y + 1; // Reset z to y + 1
            while (z <= 9) // Third digit
            {
                // Write each digit as a separate call
                char xc = x + '0'; // Convert x to character
                char yc = y + '0'; // Convert y to character
                char zc = z + '0'; // Convert z to character
                write(1, &xc, 1); // Write x
                write(1, &yc, 1); // Write y
                write(1, &zc, 1); // Write z

                // Add ", " unless it's the last combination (789)
                if (!(x == 7 && y == 8 && z == 9)) 
                {
                    write(1, ", ", 2);
                }
                z++;
            }
            y++;
        }
        x++;
    }
}


int main() {
   ft_print_comb();
    
    return 0;
}