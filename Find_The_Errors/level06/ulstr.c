#include <unistd.h>

int		main(int ac, char *av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[0][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] -= 32;
			}
			if (av[0][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] == 32;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
