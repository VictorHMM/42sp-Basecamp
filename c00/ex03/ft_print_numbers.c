#include <unistd.h>
void	ft_print_numbers(void)
{
	int	nbr;

	nbr = 48;
	while (nbr <= 57)
	{
		write(1, &nbr, 1);
		nbr++;
	}
}
