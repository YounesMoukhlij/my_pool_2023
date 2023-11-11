#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft(int n)
{
    int c =0;
     while (n > 0)
    {
        c++;
        n /= 10; 
    }
    return c;
}
void ft_putnbr(int a)
{
    long nb = 0;
    long n;
    n = a;
    int c = ft(n);
    if (n < 0)
    {
        ft_putchar('-');
       
        n *= -1;
    }

   
    while (c)
    {
        
        nb = nb * 10  + (n % 10);
        n /= 10;
        c--;
    }
    printf("%ld", nb);
}
int main()
{
    ft_putnbr(500040);
}