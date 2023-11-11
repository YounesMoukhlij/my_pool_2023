#include <unistd.h>

int main(int ac,char *av[])
{
    int i = 0;
    int flag = 1;
    char *str;
    if (ac == 2)
    {
        str = av[1];
        
        while (str[i])
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                if (flag == 1)
                {
                    str[i] -= 32;
                }
                flag = 0;
                
            }
            else if (str[i] == ' ' || str[i] == '\t')
                flag = 1;
            else if (!(str[i] >= 'a' && str[i] <= 'z'))
                flag = 0;
            
            write(1, &str[i], 1);
            i++;
        }

        
    }

}