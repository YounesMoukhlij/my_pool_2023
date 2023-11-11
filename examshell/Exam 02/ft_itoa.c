#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int ft_count(long nb)
{
    int count = 0;
    if (nb < 0)
    {
        nb *= -1;
        count++;
    }
    while (nb > 0)
    {
        nb /= 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int nbr)
{
    
    char *str, *result;
    long long n;
    n = nbr;
    int len = ft_count(n);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    result = str;
    str[len--] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (result);
    }
    if (n < 0)
    {
        n *= -1;
        str[0] = '-';
    }
    while (n > 0)
    {
        str[len] = n % 10 + 48;
        n /= 10;
        len--;
    }
    return (result);

}

int main()
{
    printf("%s\n", ft_itoa(-12345                                      ));

}