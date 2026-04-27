#include <unistd.h>
// char *rotone(char *str)
// {
// 	int i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >='a' && str[i] < 'z')
// 			str[i] = str[1] + 13;
// 		else if(str[i] == 'z')
// 			str[i] -= 13;
// 		else
// 			write(1, &str[i], 1);
// 	}
// 	return (str);
// }
int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >='a' && argv[1][i] <= 'm')
			{
				argv[1][i] = argv[1][i] + 13;
				write(1, &argv[1][i], 1);
			}
			else if(argv[1][i] >= 'm' && argv[1][i]<= 'z')
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
