#include<string.h>
#include<unistd.h>
int is_space(char c)
{
    if (c == ' ' || c == '\t')
        return 1;
    return 0;
}

int main(int ac, char **av)
{
    char *str;
    int j;
    str = av[1];
    int i = 0;
    if(ac == 2)
    {
        j = strlen(str);
        while(is_space(str[0]) || is_space(str[j - 1]))
        {
            i++;
        }
        i = 0;
        while(str[i])
        {
            if (is_space(str[i]) && is_space(str[i + 1]))
            {
                str[i] = ' ';
                write(1, &str[i], 1);
            }
            else
                write(1, &str[i], 1);

            i++;
        }

    }
}
