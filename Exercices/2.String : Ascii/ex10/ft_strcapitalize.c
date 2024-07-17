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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) 
{
    unsigned int i;
    unsigned int src_len = ft_strlen(src);

    i = 0;
    if (size != 0) 
    {
        while (src[i] != '\0' && i < size - 1) 
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return src_len;
}

int main() 
{
    char src[] = "World!";
    char dest[20] = "Hello ";
    
    printf("%d | %s\n", ft_strlcpy(dest, src, 10), dest);

    return 0;
}
