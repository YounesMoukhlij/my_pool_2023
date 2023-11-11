#include <unistd.h>

int check(char *str, char c, int position)
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

int main(int ac,char *av[])
{
    int i = 0;
    int j = 0;
    char *str0;
    char *str1;

    str0 = av[1];
    str1 = av[2];

    if (ac == 3)
    {
        while (str0[i])
        {
            if (check(str0, str0[i], i) == 1)
                write(1, &str0[i], 1);
            i++;
        }
        while (str1[j])
        {
            if (check(str1, str1[j], j) == 1 && check(str0, str1[j], i) == 1)
            {
                write(1, &str1[j], 1);
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}