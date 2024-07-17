#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str) 
{
    int i;
    i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}

char *ft_strlowcase(char *str) 
{
    int i;
    int first;

    i = 0;
    first = 1;
    ft_strupcase(str);
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            if (first == 1) 
            {
                str[i] -= 32;
                first = 0;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            first = 0;
        }
        else
        {
            first = 1;
        }
        i++;
    }
    return (str);
}

int main() 
{
    char str[] = "SALUT 3JE SUIS UN POULET -DEVIN OK ?";
    printf("Chaine de base : %s\n", str); 
    ft_strlowcase(str);
    printf("Chaine modifiée : %s\n", str); 
}
