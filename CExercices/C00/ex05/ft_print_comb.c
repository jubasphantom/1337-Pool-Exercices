#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_comb(void)

{
	int	d1;
	int	d2;
	int	d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				ft_putchar(d1);
				ft_putchar(d2);
				ft_putchar(d3);
				write(1, ", ", 2)
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
