#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int flag;

    flag = 0;

    char *str;

    if (ac == 2)
    {
        str = av[1];
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        while (str[i])
        {
            if (str[i] == ' ' || str[i] == ' ')
                    flag = 1;
            if (!(str[i] == ' ' || str[i] == '\t'))
            {
                if (flag == 1)
                    write(1, " ", 1);
                flag = 0;
                write(1, &str[i], 1);
            } 
            i++;
        }
    }
    write(1, "\n", 1);
}