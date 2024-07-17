#include <stdlib.h>
#include <stdio.h>

int ft_str_length(char *str)
{
    int index = 0;
    while (str[index])
        index++;
    return index;
}

char *ft_strcpy(char *dest, char *src)
{
    int index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}

int ft_compute_final_length(char **strings, int size, int sep_length)
{
    int final_length = 0;
    for (int index = 0; index < size; index++)
    {
        final_length += ft_str_length(strings[index]);
        if (index < size - 1)
            final_length += sep_length;
    }
    return final_length;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size <= 0)
        return NULL;

    int full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
    char *string = (char *)malloc((full_length + 1) * sizeof(char));
    if (!string)
        return NULL;

    char *d = string;
    for (int index = 0; index < size; index++)
    {
        ft_strcpy(d, strs[index]);
        d += ft_str_length(strs[index]);
        if (index < size - 1)
        {
            ft_strcpy(d, sep);
            d += ft_str_length(sep);
        }
    }
    *d = '\0';

    return string;
}

int main(void)
{
    char *strs[3];
    strs[0] = (char *)malloc(sizeof(char) * (5 + 1)); // Allocate memory for "Hello"
    strs[1] = (char *)malloc(sizeof(char) * (7 + 1)); // Allocate memory for "friend,"
    strs[2] = (char *)malloc(sizeof(char) * (14 + 1)); // Allocate memory for "you are awesome"

    ft_strcpy(strs[0], "Hello");
    ft_strcpy(strs[1], "friend,");
    ft_strcpy(strs[2], "you are awesome");

    char *separator = " ";
    char *result = ft_strjoin(3, strs, separator);
    if (result)
    {
        printf("%s\n", result); // Print the result
        free(result); // Free dynamically allocated result
    }

    for (int i = 0; i < 3; i++)
    {
        free(strs[i]);
    }

    return 0;
}
