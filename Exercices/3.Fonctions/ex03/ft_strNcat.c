#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (j < nb && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return dest;
}

int main()
{
    char src[] = "Network";
    char dest[] = "42 ";

    printf("%s", ft_strncat(dest, src, 7));

    return 0;
}
