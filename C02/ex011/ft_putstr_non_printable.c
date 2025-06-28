

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        // Check if the character is printable (ASCII range 32 to 126)
        if (str[i] >= 32 && str[i] <= 126) {
            ft_putchar(str[i]);  // Print the character directly
        } else {
            // Print the non-printable character in hexadecimal form
            ft_putchar('\\');  // Start the escape sequence
            ft_putchar('x');   // Add 'x' to the escape sequence
            // Convert to hex and print
            ft_putchar("0123456789ABCDEF"[str[i] / 16]); // First hex digit
            ft_putchar("0123456789ABCDEF"[str[i] % 16]); // Second hex digit
        }
        i++;
    }
}
       