#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct younes
{
    int size;
    char *str;
    char *copy;
} point;

void ft(point *o)
{
    o->size = 2;
    o->str = "younes";
}
int main()
{
    point p;
    p.size = 14;
    p.str = "na3moma";
    printf("%d %s\n", p.size, p.str);
    ft(&p);
    printf("%d  %s\n", p.size, p.str);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_write_num(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_write_num(nb);
	}
	else if (nb > 9)
	{
		ft_write_num(nb / 10);
		ft_write_num(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
struct younes *ft_create(int ac,char **av)
{
    struct younes *tab;
    int i = 0;
  
    tab = malloc(sizeof(struct younes) * (ac + 1));
   
    while (i < ac)
    {
        tab[i].size = strlen(av[i]);
        tab[i].str = av[i];
        tab[i].copy = strdup(av[i]);
        i++;
    }
    tab[i].str = 0;
    tab[i].copy = 0;
    return (tab);
}

void ft_show(point *D)
{
    int i = 0;
    while (D[i].str != 0)
    {
        ft_write_num(D[i].size);
        write(1, "\n", 1);
        ft_putstr(D[i].str);
        write(1, "\n", 1);
        ft_putstr(D[i].copy);
        write(1, "\n", 1);
        i++;

    }

}

int main(int ac, char *av[])
{
   
    if (ac >= 1)
    {
        ft_show(ft_create(ac, av));
    }

}*/