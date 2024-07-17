#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int range = max - min;
    int *result = (int *)malloc(sizeof(int) * range);
    
    if (!result)
        return (NULL);
    
    for (int i = 0; min < max; ++i, ++min)
        result[i] = min;
    
    return result;
}

int main(void)
{
    int min = 5;
    int max = 10;
    int *tab = ft_range(min, max);
    int size = max - min;

    if (!tab)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; ++i)
        printf("%d, ", tab[i]);
    printf("\n");

    free(tab);

    return 0;
}
