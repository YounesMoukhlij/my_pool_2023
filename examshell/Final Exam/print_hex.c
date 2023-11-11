#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int r;

    while (str[i] == ' ' || ( str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        r = r * 10;
        r += str[i] - 48;
        i++; 
    }
    return (r * sign);
}


void print_hex(int n)
{
    
    char str[] = "0123456789abcdef";

    if (n >= 16)
    {
        print_hex(n / 16);
        print_hex(n % 16);
    }
    else
        write(1, &str[n], 1);
     
   

}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        print_hex(ft_atoi(av[1]));
    }
}