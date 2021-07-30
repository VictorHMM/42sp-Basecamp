#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	int	nbr;

	nbr = 122;
	while (nbr >= 97)
	{
		write(1, &nbr, 1);
		nbr--;
	}
}
