#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
int main(int ac, char **av)
{
    int i = 0;
    int len = 0;
    char *str;
    int a = 1;

    if (ac == 2)
    {
        while (av[1][len])
            len++;
        len -= 1;
        while (len > i)
        {
            if (!(av[1][len] == av[1][i]))
                a = 0;
            i++;
            len--;
        }
        if (a == 1)
        {
            write(1, av[1], strlen(av[1]));
        }
    }

}