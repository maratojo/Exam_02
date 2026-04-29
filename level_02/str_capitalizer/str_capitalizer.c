#include <unistd.h>
int is_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

int is_alpha_b(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
int main(int ac, char **av)
{
    char *str;
    str = av[1];
    int i;
    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    i = 0;
    while(str[i])
    {
        if(is_alpha(str[i]) && (i == 0 || str[i - 1] == ' '))
        {
            str[i] -= 32;
            write(1, &str[i], 1);
        }
        // else if(str[i] == ' ' && is_alpha(str[i + 1]))
        // {
        //     str[i + 1] -= 32;
        //     write(1, &str[i], 1);
        // }
        else if (is_alpha_b(str[i]) && str[i - 1] != ' ')
        {
            str[i] += 32;
            write(1, &str[i], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}
