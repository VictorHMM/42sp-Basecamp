#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_number(int number)
{
	int	div;
	int	mod;

	div = number / 10;
	mod = number % 10;
	ft_putchar(div + '0');
	ft_putchar(mod + '0');
}

void	ft_print_comb2(void)
{
	int	nbr_1;
	int	nbr_2;

	nbr_1 = 0;
	nbr_2 = 1;
	while (nbr_1 <= 98)
	{	
		while (nbr_2 <= 99)
		{			
			print_number(nbr_1);
			ft_putchar(' ');
			print_number(nbr_2);
			if (!(nbr_1 == 98 && nbr_2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nbr_2++;
		}
		nbr_2 = ++nbr_1 + 1;
	}
}
