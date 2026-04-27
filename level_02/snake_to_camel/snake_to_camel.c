#include<unistd.h>
int main(int ac, char **av)
{
    int i;
    char *str;
    char c;
    str = av[1];
    int j;
    // j = 1;
    if(ac == 2)
    {
        while(str[i] && str[i - 1] != '_')
        {
            if (str[i] == '_')
            {
                // str[i + 1] -= 32;
                i++;
                c = str[i] - 32;
                write(1, &c, 1);
            }
            else
                write(1, &str[i], 1);
            // write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
