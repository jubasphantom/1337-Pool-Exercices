#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_numbers(void)

{
	int	num;

	num = 48;
	while (num <= 57)
	{
		write(1, &num, 1);
		num++;
	}
}
