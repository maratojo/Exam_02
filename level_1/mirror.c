#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >='a' && argv[1][i] <= 'm')
			{
				argv[1][i] = 'a' + 25 - (argv[1][i] - 'a');
				write(1, &argv[1][i], 1);
			}
			else if(argv[1][i] >= 'm' && argv[1][i]<= 'z')
			{
				argv[1][i] = 'z' - (25 - (-argv[1][i] + 'z'));
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
