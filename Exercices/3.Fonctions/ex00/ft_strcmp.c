#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i = 0;
    
    while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
    {
        i++;
    }
    
    return (s1[i] - s2[i]);
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    
    printf("Comparing str1 and str2: %d\n", ft_strcmp(str1, str2));
    printf("Comparing str1 and str3: %d\n", ft_strcmp(str1, str3));
    
    return 0;
}
