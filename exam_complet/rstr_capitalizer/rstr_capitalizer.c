#include <stdio.h>
#include <unistd.h>
#include<string.h>
int main(int ac, char **av)
{
    int i = 0;
    char *str;
    int j;
    int k;
    k = 1;
    if (ac >= 2)
    {
        while(k < ac)
        {
            str = av[k];
            j = strlen(str);
            i = 0;
            while(str[i])
            {
                if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || i == j - 1))
                {
                    str[i] -= 32;
                    write(1, &str[i], 1);
                }
                else if (str[i] >= 'A' && str[i] <= 'Z' && str[i + 1] != ' ' && str[i + 1] != '\t' && i != j - 1)
                {
                    str[i] += 32;
                    write(1, &str[i], 1);
                }
                else
                    write(1, &str[i], 1);
                i++;
            }
            write(1, "\n", 1);
            k++;
        }
        // write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return 0;
}
