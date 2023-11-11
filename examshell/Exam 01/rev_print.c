#include <unistd.h>
#include <stdio.h>

void  rev_print(char *str)
{
    
    int length = 0;
    while (str[length])
        length++;
    while (length >= 0)
    {
        write(1, &str[length], 1);
        length--;
    }
    //return (str);
}
int main(int ac,char *av[])
{
    if (ac == 2)
    {
        rev_print(av[1]);
    }
    return (0);
}