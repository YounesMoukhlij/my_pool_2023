#include <unistd.h>
int ft_atoi(char a)
{
    if (a >= '0' && a <= '9')
        return (a - 48);
    else if (a >= 'a' && a <= 'f')
        return (a - 'a' + 10);
    else if (a >= 'A' && a <= 'F')
        return (a - 'A' + 10);
    return (0);
}

int is_valid(char c, int base)
{
    char s1[16] = "0123456789abcdef";
    char s2[16] = "0123456789ABCDEF";
    base -= 1;
    while (base)
    {
        if (s1[base] == c || s2[base] == c)
            return (1);
        base--;
    }
    return (0);

}
int ft_atoi_base(const char *str, int base)
{
    int sign = 1;
    int num = 0;
    int i = 0;
    while (str[i] <= 32)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (is_valid(str[i], base) == 1)
    {
        num = num * base + ft_atoi(str[i]);
        i++;
    }
    return (num * sign);   
}

#include <stdio.h>

int main()
{
    printf("%d", ft_atoi_base("ab", 16));
}