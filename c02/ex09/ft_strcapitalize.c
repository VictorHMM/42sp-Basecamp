int		is_alpha_num(char c);
char	case_up(char c);
char	case_down(char c);

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 1;
	str[0] = case_up(str[0]);
	while (str[counter] != '\0')
	{
		if (!(is_alpha_num(str[counter - 1]) == 1))
			str[counter] = case_up(str[counter]);
		else
			str[counter] = case_down(str[counter]);
		counter++;
	}
	return (str);
}

char	case_down(char	c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

char	case_up(char	c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int	is_alpha_num(char	c)
{
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
			|| (c >= 48 && c <= 57)))
		return (0);
	return (1);
}
