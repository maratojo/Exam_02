#include<unistd.h>

int main(int ac, char **av)
{
    char *str;
    str = av[1];
    int i;
    int end;
    // i = 0;
    if (ac == 2)
    {
        i = 0;
        while(str[i])
            i++;
        while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            i--;
        end = i;
        while(i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
            i--;
        while (i < end)
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

