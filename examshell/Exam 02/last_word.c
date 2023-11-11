#include <unistd.h>


int main(int ac,char **av)
{
    int i = 0;
    int j = 0;
    char *str;
    str = av[1];
    if (ac == 2)
    {
        while (str[i])
        {
            if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 126))
            {
                j = i + 1;
            }
            i++;
        }
        while (str[j] >= 33 && str[j] <= 126)
        {
            write(1, &str[j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}