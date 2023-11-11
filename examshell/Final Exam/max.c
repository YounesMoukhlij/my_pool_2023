#include <stdio.h>


int max(int *tab, unsigned int len)
{
    int i;

    if ( len == 0)
        return (0);
    int max = tab[len - 1];
    while (len >= i)
    {
        if (tab[i] > max)
        {
            max = tab[i];
            i = 0;
        }
        i++;
    }
    return (max);
}


int main()
{
    int tab[8] = {9,2,6,201,100,10,7,5};
    
    printf(" %d ", max(tab,8));
}