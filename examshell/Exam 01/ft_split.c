#include <stdlib.h>
#include <stdio.h>

char **ft_split
{
    char *res,*final;
    int i = 0;

}
int main(int ac,char *av[])
{
    char **split;
    split = ft_split(av[1]);
    int i = 0;
    while (split[i])
    {
        printf("  %s   \n ", split[i]);
        i++;
    }
}

