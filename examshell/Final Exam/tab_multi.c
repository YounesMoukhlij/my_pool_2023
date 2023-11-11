#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    long a;

    a = n;
    if (n < 0)
    {
        ft_putchar('-');
        a *= -1;
    }
    if (n > 9)
    {
        ft_putnbr(a / 10);
        ft_putnbr(a % 10);
    }
    else
        ft_putchar(a % 10 + 48);
}
int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

int main(int ac, char **av)
{
    int i = 1;
    int somme = 0;
    
    
    
    if (ac == 2)
    {
        int num1 = ft_atoi(av[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " * ", 3);
            ft_putnbr(num1);
            write(1, " = ", 3);
            ft_putnbr(i * num1);
            write(1, "\n", 1);
            somme += 
            i++;
        }
    }
    return (0);

}