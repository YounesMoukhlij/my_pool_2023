#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);

}
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char *av[])
{
    int i = 0;
    int j = 0;
    if (ac == 3)
    {
        
            while (av[2][j])
            {
                if (av[2][j] == av[1][i])
                    i++;
                j++;
            }
        
            if (i == ft_strlen(av[1]))
            {
                ft_putstr(av[1]); 
             }
    }
    write(1, "\n", 1);
}