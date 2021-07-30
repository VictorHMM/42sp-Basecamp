void	ft_rev_int_tab(int *tab, int size)
{
	int		counter;
	char	temp;

	counter = 0;
	while (counter <= size / 2)
	{
		temp = tab[counter];
		tab[counter] = tab[size - 1 - counter];
		tab[size - 1 - counter] = temp;
		counter ++;
	}
}
