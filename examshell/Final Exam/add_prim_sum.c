#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb % 10 + 48);
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

int ft_is_prime(int nb)
{
    if (nb == 2)
        return (1);
    int i = 2;
	if (2 > nb)
		return (0);
    while ((nb / i) >= i)
    {
        if (nb % i == 0)
            return (0);
        i++; 
    }
    return (1);
}

void gather_together(int a)
{
    int r = 0;
    
    while (a >= 2)
    {
        if (ft_is_prime(a) == 1)
            r += a;
        a--;
    }
    ft_putnbr(r);
}

int main(int ac, char *av[])
{
	if (ac == 1)
		write(1, "0", 1);
    if (ac == 2)
    {
		gather_together(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
    return (0);
}
