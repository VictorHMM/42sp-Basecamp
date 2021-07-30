#include <unistd.h>
void	ft_print_alphabet(void)
{
	int	nbr;

	nbr = 97;
	while (nbr <= 122)
	{
		write(1, &nbr, 1);
		nbr++;
	}
}
