#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int *ft_range(int min,int max)
{
    int *tab;
    int i = 0;
    int size; 
    if (max > min)
    {
        size = max - min; 
    }
    if (min > max)
    {
        size = min - max; 
       
    }


    tab = malloc(sizeof(int) * size + 1);
    
    if (!tab)
        return (0);

    if (min == max)
    {
        return (0);
    }
    if (max > min)
    {
        
        while (i <= size)
        {
            tab[i] = min + i;
            i++;
        }
    }
    else if (min > max)
    {
        while (i <= size)
        {
            tab[i] = min - i;
            i++;
        }
    }
    return (tab);
}

int main()
{
    int *tab;
    int i = 0;
    int min = 0; int max = INT_MAX;
    int size = max - min;
    if (min > max)
    {
        size = min - max;
        
    }
    tab = ft_range(min,max);
    while (i <= size)
    {
        printf("%d,   ", tab[i]);
        i++;
    }
    return (0);
}