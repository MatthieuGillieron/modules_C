#include <stdio.h>

int ft_str_is_alpha(char *str) 
{
    int i = 0;

    if (str[i] == '\0') 
    {
        return 1;
    }
    while (str[i] != '\0') 
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
        {
            i++;
        } 
        else 
        {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    printf("%d\n", ft_str_is_alpha("abcdefghijkl"));
    printf("%d\n", ft_str_is_alpha("abc1defghijkl"));
    printf("%d\n", ft_str_is_alpha("-_134556efghij67"));
    return 0;
}
