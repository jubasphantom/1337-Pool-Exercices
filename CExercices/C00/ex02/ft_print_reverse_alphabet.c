#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)

{
	int	num;

	num = 122;
	while (num >= 97)
	{
		ft_putchar();
		num--;
	}
}
