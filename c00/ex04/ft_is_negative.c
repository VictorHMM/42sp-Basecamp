#include <unistd.h>
void	ft_is_negative(int n)
{
	char	result;

	result = 'P';
	if (n < 0)
		result = 'N';
	write(1, &result, 1);
}
