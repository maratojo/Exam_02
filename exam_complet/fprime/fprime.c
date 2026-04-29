#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av)
{
    int a;
    int i;
    int first = 1;
    if (ac == 2)
    {
        a = atoi(av[1]);
        i = 2;
        while(a > 1)
        {
            while(a % i == 0)
            {
                if (first == 0)
                    printf("*");
                printf("%d", i);
                // printf ("*");
                first = 0;
                a = a / i;

            }
            i++;
        }
    }
    printf("\n");
    return 0;
}
