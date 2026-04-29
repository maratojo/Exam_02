#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    int i;
    int j;
    i = 0;
    j = tab[0];
    while(i < len)
    {
        if (tab[i] > j)
            j = tab[i];
        i++;
    }
    return j;
}
int main()
{
    int tab[5] = {1, 3, 2, 8, 5};
    // int i = 0;
    printf("%d", max(tab, 5));
    return 0;

}

