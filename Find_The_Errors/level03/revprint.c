#include <unistd.h>
#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != \0)
		i++;
	return (len);
}
char *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 10);
		i++;
	}
	return(i);
}

int main()
{
	char str[] = "gbrireugneb";
	ft_rev_print(str);
}