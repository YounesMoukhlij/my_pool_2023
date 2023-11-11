#include <unistd.h>

int check_the_doubles(char *str,char c, int position)
{
    int i = 0;
    while (i < position)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char *av[])
{
    int i = 0;
    int j;

    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (check_the_doubles(av[1],av[1][i],i) == 1)
                        {
                            write(1, &av[1][i], 1);
                        }
                        break;       
                }
                j++;
            }
            i++;
        }

    }
    write(1, "\n", 2);
    return (0);
}

