char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j;

    if (to_find[0] == '\0')  // Handle the case where to_find is an empty string
        return str;

    while (str[i] != '\0')
    {
        j = 0;
        // Check if the substring matches
        while (str[i + j] == to_find[j] && str[i + j] != '\0' && to_find[j] != '\0')
        {
            j++;
        }

        // If we've matched the entire to_find string, return the pointer to the match in str
        if (to_find[j] == '\0')
        {
            return &str[i];
        }
        i++;
    }

    return (NULL);  // Return NULL if no match is found
}
