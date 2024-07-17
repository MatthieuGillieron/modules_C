#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (j < size - 1 && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return i + j;
}

int main()
{
    char src[] = "Born to code";
    char dest[] = "1337 42";
    printf("%u\n", ft_strlcat(dest, src, 20));
    printf("%s\n", dest);
}
