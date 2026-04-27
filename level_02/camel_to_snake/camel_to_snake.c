#include<unistd.h>
int main(int argc, char **argv)
{
    char *str;
    int i;
    str = argv[1];
    i = 0;
    if (argc == 2)
    {
        while(str[i])
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                write(1, "_", 1);
                str[i] += 32;
            }
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
