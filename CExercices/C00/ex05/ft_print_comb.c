#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_comnb(void)

{
	int	d1;
	int	d2;
	int	d3;

	d1 = 48;
	while (d1 <= 55)
	{
		while (d2 >= d1 + 1 && d2 <= 56)
		{
			while (d3 >= d2 + 1 && d3 <= 57)
			{
				ft_putchr(d1);
				ft_putchar(d2);
				ft_putchar(d3);
				write(1, ", ", 2);
			}
		}
	}
}
