#include <stdlib.h>
#include <stdio.h>


int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    return (sign * result);
}
int *ft_range(int min, int max)
{
    int *tab,*result;
    int i = 0;
    int size = max - min;
    if (min >= max)
        return (0);
    tab = (result = (int *)malloc(sizeof(int) * size));
    if (!tab)
        return (0);
    while (i < size)
    {
        tab[i] = min + i;
        i++;
    }
    return (result);
}

int main(int ac,char **av)
{
    int size,min,max;
    int i = 0;
    int *tab;

    if (ac == 3)
    {
        min = ft_atoi(av[1]);
        max = ft_atoi(av[2]);
        tab = ft_range(min, max);
        size = max - min;
        while (i < size)
        {
            printf(" %d,   ", tab[i]);
            i++;
        }
    }
    printf("\n");
    return (0);
}