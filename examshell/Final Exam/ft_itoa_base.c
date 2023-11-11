#include <stdlib.h>
#include <stdio.h>

char *ft_itoa_base(int n,int base)
{
    if (base < 2 || base > 16)
        return NULL;
    int numberofnumbers = 0;
    int temp_value = n;

    while (temp_value != 0)
    {
        temp_value /= base;
        numberofnumbers++;
    }

    char *r = malloc(sizeof (char) * (numberofnumbers + 1));
    if (r == NULL)
        return (NULL);
    char *str = "0123456789ABCDEF";
    r[numberofnumbers] = '\0';
    if (n < 0)
    {
        r[0] = '-';
        n *= -1;
    }
    int i = numberofnumbers - 1;
    while (i)
    {
        r[i] = str[n % base];
        n /= base;
        i--;
    }
    return (r);
}

int main()
{
    printf("%s\n",ft_itoa_base(20, 10));
}