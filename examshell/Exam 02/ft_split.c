#include <stdlib.h>
#include <stdio.h>

int check_the_sep(c)
{
   if (c == 32 || c == 0 || c == 10 || c == 9)
        return (0);
return (1);
}

int count_words(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        while (str[i] && check_the_sep(str[i]) == 0)
            i++;
        if (str[i])
            count++;
        while (str[i] && check_the_sep(str[i]) == 1)
            i++;
    }
    return (count);

}
int ft_count(char *str)
{
    int i =0;
    while (str[i] && check_the_sep(str[i]) == 1)
        i++;
    return (i);
}
char *ft_word(char *str)
{
    int i = 0;  int len = ft_count(str); char *d;

    d = (char *)malloc(sizeof(char) * (len + 1));
    if (!d)
        return (0);
    while (i < len)
    {
        d[i] = str[i];
        i++;
    }
    d[i] = '\0';
    return (d);
}
char **ft_split(char *str)
{
    char **d ; char **result;
    int i = 0;

    d = (result = (char **)malloc(sizeof(char *) * (count_words(str) + 1)));
    if (!d)
        return (0);
    while (*str)
    {
        while (*str && check_the_sep(*str) == 0)
            str++;
        if (*str)
        {
            d[i] = ft_word(str);
            i++;
        }
        while (*str && check_the_sep(*str) == 1)
            str++;
    }
    d[i] = 0;
    return (result);
}

int main ()
{
    char str[] = " younes  moukh  1337";

    char **split = ft_split(str);
    int i =0;
    while (split[i])
    {
        printf("%s\n", split[i]);
        i++;
    }
}