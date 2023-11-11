#include <stdio.h>
#define typedef s_list t_list;

typedef s_list 
{
    int a;
    t_list *next;

} ;


t_list *sort_list(t_list *lst, int (*cmp) (int ,int))
{
    int i;
    t_list *t;

    t = lst;
    while (t->next != NULL)
    {
        if ((*cmp)(t->a , t->next->a) == 0)
        {
            i = lst->a;
            lst->a = lst->next->a;
            lst->next->a = i;
            lst = t;
        }
        else
            lst = lst->next;
        
    }
    lst = t; 
    return (lst);
}
int aaa(int a,int b)
{
    return (a <= b);
}
int main()
{
    t_list *list;

    list = sort_list(list, &aaa);

    while (list != NULL)
    {
        printf(" %d ", list->a);
        list = list->next;
    }

}