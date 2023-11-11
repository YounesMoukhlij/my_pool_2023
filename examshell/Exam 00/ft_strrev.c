int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
char *ft_strrev(char *str)
{
    int i = 0;
    char swap;
    int l = ft_strlen(str) - 1;
    
    while (i < l)
    {
        swap = str[i];
        str[i] = str[l];
        str[l] = swap;
        i++;
        l--;
    }
    return (str);

}
#include <stdio.h>

int main(void)
{
    char str1[] = "Abou - /  * Baker 0 ";
    
    printf("%c\n", ft_strrev(str1));
    
}