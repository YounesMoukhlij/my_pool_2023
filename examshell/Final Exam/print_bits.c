#include <unistd.h>
#include <stdio.h>
void ft_chawni(char c)
{
    write(1, &c, 1);
}
void    print_bites(unsigned char o)
{
    int b = 1;
    
    while (b <= 128)
    {
        if (o | b )
            ft_chawni('1');
        else
            ft_chawni('0');
        b *= 2;
    }

}
int main()
{
    print_bites(2);
                
}