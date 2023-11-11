#include <stdio.h>

int check_error(char *base)
{
    int i = 0;
    int j = 0;
    if (base[0] == '\0')
        return (0);
    while (base[i])
    {
        if (base[i] <= 32 || base[i] == '-' || base[i] == '+')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
            {
                return (0);
            }
            j++;
        }
        i++;
    }
    return (i);
}

int check_white_spaces(char *str,int *pos)
{
    int i = 0;
    int sign = 1;

   
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    *pos = i;
    return (sign);
}

int look_for_the_n(char *base,char n)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == n)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int result = 0;
    int n = 0;
    int len_base = check_error(base);
    int sign = check_white_spaces(str,&i);
    if (len_base >= 2)
    {
        n = look_for_the_n(base,str[i]);
        while (n != -1)
        {
            
            result = result * len_base + n;
            i++;
           n = look_for_the_n(base,str[i]);
            
        }
        return (result * sign);
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_atoi_base("1ab", "0123456789abcedf"));

}