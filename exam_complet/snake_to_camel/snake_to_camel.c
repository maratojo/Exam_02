#include <unistd.h>

int main(int ac, char **av)
{
    char *str;
    int i;
    char c;
    i = 0;
    if(ac == 2)
    {

        str = av[1];
        while(str[i] && str[i - 1] != '_')
        {
            if(str[i] == '_')
            {
                i++;
                c = str[i] - 32;
                write(1, &c, 1);
            }
            else
                write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
