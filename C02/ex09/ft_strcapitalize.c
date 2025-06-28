char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        // Make everything lowercase first
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        // First character of string or first character after a non-alphanumeric
        if (i == 0 || !( (str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
                         (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
                         (str[i - 1] >= '0' && str[i - 1] <= '9')))
        {
            // Capitalize if it's a lowercase letter
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }

        i++;
    }

    return str;
}
