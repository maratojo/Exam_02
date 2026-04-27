#include<unistd.h>
int find_str(char c, char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}


int main(int argc, char **argv)
{
    char *str;
    char *str2;
    char c;
    str = argv[1];
    str2 = argv[2];
    char already[256];
    int i;
    int j;
    j = 0;
    i = 0;
    if (argc > 1)
    {
        while(str[i])
        {
            c = str[i];
            if(find_str(c, str2) && !find_str(c, already))
            {
                already[j] = c;
                write(1, &already[j], 1);
                j++;

            }
            i++;
        }
    }
    write(1, "\n", 1);
}
