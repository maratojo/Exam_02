#include<string.h>
#include<stdio.h>
size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;
    i = 0;
    while(reject[i])
    {
        j = 0;
        while(s[j])
        {
            if(s[j] == reject[i])
                return j;
            j++;
        }
        i++;
    }
    return j;
}

// mretouurner nombre an le str ze ts ao am le reject

// int main()
// {
//     char str[] = "sl";
//     char accept[] = "world";
//     printf("%zu", ft_strcspn(str, accept));
//     return 0;

// }
