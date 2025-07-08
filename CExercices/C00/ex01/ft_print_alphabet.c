#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)

{
	int	num;

	num = 97;
	while (num <= 122)
	{
		ft_putchar();
		num++;
	}
}
