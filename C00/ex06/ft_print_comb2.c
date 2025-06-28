#include <unistd.h>

void ft_print_comb2(void)
{
    int a = 0;
    int b;

    while (a <= 98) // First number ranges from 0 to 98
    {
        b = a + 1; // Second number starts one greater than the first
        while (b <= 99) // Second number ranges from a+1 to 99
        {
            // Write the first number (a)
            char a1 = a / 10 + '0'; // Tens place of a
            char a2 = a % 10 + '0'; // Ones place of a
            write(1, &a1, 1);       // Write tens place
            write(1, &a2, 1);       // Write ones place

            write(1, " ", 1);       // Write the space between numbers

            // Write the second number (b)
            char b1 = b / 10 + '0'; // Tens place of b
            char b2 = b % 10 + '0'; // Ones place of b
            write(1, &b1, 1);       // Write tens place
            write(1, &b2, 1);       // Write ones place

            // Add ", " unless it's the last combination (98 99)
            if (!(a == 98 && b == 99))
                write(1, ", ", 2);

            b++;
        }
        a++;
    }
}


int main() {
   ft_print_comb2() ;

    return 0;
}