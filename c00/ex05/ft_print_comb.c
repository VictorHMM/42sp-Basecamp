#include <unistd.h>

void	write_number(int hundreds, int dozens, int units)
{
	write(1, &hundreds, 1);
	write(1, &dozens, 1);
	write(1, &units, 1);
	if (hundreds == 55)
		write(1, "", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	units_counter;
	int	dozens_counter;
	int	hundreds_counter;

	units_counter = 50;
	dozens_counter = 49;
	hundreds_counter = 48;
	while (hundreds_counter <= 55)
	{
		while (dozens_counter <= 56)
		{
			while (units_counter <= 57)
			{				
				write_number(hundreds_counter, dozens_counter, units_counter);
				units_counter++;
			}
			units_counter = ++dozens_counter + 1;
		}
		dozens_counter = ++hundreds_counter;
	}
}
