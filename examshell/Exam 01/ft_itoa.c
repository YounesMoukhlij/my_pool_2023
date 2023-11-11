#include <stdlib.h>
#include <stdio.h>

int ft_length(int n)
{
    int count = 0;
    if (n < 0)
    {
        n *= -1;
        count++;
    }
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    int i,len;
    char *res, *final;
    i = 0;
    len = ft_length(n);
    if (n == -2147483648)
        return ("-2147483648");
    res = (final = (char *)malloc(sizeof(char) * len + 1));
    if (!res)
        return (0);
    res[len--] = '\0';
    if (n == 0)
    {
        res[0] = '0';
        return(res);
    }
    if (n < 0)
    {
        res[0] = '-';
        n *= -1;
    }
    while (n > 0)
    {
        res[len] = (n % 10) + 48;
        n /= 10;
        len--;
    }
    return (final);
}

int main(void)
{
    printf("%s$\n", ft_itoa(-2147483648));
    printf("%s$\n", ft_itoa(2147483647));
    printf("%s$\n", ft_itoa(0));
    printf("%s$\n", ft_itoa(-123456));
    printf("%s$\n", ft_itoa(1999));
    printf("%s$\n", ft_itoa(2020));
}