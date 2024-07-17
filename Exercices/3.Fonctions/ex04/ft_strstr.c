#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    if (to_find[j] == '\0')
        return str;

    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        
        if (to_find[j] == '\0')
            return str + i;

        i++;
        j = 0;
    }

    return NULL;
}

int main()
{
    char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
    char find[] = "piscine";
    printf("%s", ft_strstr(str, find));
}
