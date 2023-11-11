#include <unistd.h>

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

int main(void)
{
    int n = 1;

    while (n <= 100)
    {
		if ((n % 2 == 0) && (n % 4 == 0))
		 	write(1, "fizzbuzz", 8);

        else if (n % 2 == 0)
            write(1, "fizz", 4);
        else if (n % 4 == 0)
            write(1, "buzz", 4);
        
           
        else
            ft_putnbr(n);
        n++;
        write(1, "\n", 1);
    }
    return (0);
}