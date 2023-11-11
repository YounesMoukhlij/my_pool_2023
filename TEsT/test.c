#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tab;
    int i = 0;
    int count = 0;
    int max = 10;
    tab = malloc(4 * max);
    if (!tab)
        return (0);
    while (i < max)
    {
        tab[i] = i;
        i++;
    }
    i = 0;
    while (i < max)
    {
        printf("%d  ", tab[i]);
        i++;
    }
    while (i > 0)
    {
        i--;
        count++;
    }
   //int a = sizeof(tab *) / sizeof (int *);
    printf("\n%d\n", count);
}