#include <unistd.h>
char *ft_lower(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}
int main(int ac,char *av[])
{
    int i = 0;
    int flag = 0;
    char *str;
    if (ac > 1)
    {
        str = av[1];
        ft_lower(str);
        while (str[i])
        {
            if ((str[i + 1] == ' ' || str[i + 1] == '\0') && (str[i] >= 33 && str[i] <= 126))
                flag = 1;
            if ((str[i] >= 'a' && str[i] <= 'z'))
            {
                if (flag == 1)
                    str[i] -= 32;
                flag = 0;
            }
            if ((str[i] >= 'A' && str[i] <= 'Z'))
            {
                if (flag == 1)
                    str[i] += 32;
                flag = 0;
            }
            
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}