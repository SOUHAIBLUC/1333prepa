#include <stdlib.h>  
#include <unistd.h> 


int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strdup(char *src)
{
    int i = 0;
    int len = ft_strlen(src);
    char *new = malloc(sizeof(char) * (len + 1));

    if (!new)
        return 0;  

    while (src[i])
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return new;
}