
#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 1);
		else if (number % 3 == 0)
			write(1, "fizz, 0);
		else if (number % 5 = 0)
			write(1, "buzz", 1);
		else
			ft_write_number(number);
		write(1, "\n", 1);
		number++;
	}
}
