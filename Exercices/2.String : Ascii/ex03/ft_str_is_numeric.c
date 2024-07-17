#include <stdio.h>

int ft_str_is_numeric(char *str) 
{
    int i;

    i = 0;
    while (str[i] != '\0') 
    {
        if (!(str[i] >= 48 && str[i] <= 57)) 
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() 
{
    printf("%d\n", ft_str_is_numeric("01948987493"));
    printf("%d\n", ft_str_is_numeric("0484882j8995489"));
    printf("%d\n", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
    return 0;
}
