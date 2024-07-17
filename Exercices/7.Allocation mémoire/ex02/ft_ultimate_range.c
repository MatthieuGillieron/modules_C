#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int bound = max - min;
    int *buffer = malloc(bound * sizeof(int));

    if (!buffer)
    {
        *range = NULL;
        return (-1); 
    }

    *range = buffer;

    for (int index = 0; index < bound; ++index)
    {
        buffer[index] = min + index;
    }

    return bound;
}

int main(void)
{
    int min = 5;
    int max = 10;
    int *tab;
    int size;
    int i = 0;

    size = ft_ultimate_range(&tab, min, max);

    if (size == -1)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    while (i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    printf("\n");

    free(tab);

    return 0;
}
