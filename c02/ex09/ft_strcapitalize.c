char	*ft_strcapitalize(char *str)
{
	int counter;

	counter = 1;
	if(!(is_uppercase(str[0]) == 1))
		str[0] = case_up(c);
	while(str[counter] != '\0')
	{
		if(!(is_alpha_num(str[counter - 1]) == 1))
			str[counter] = 
	}
}

char	case_up(char c)
{
	if(c >= 97 && c <= 122)
		c += 32;
	return (c);
}

int	is_uppercase(char c)
{
	if(c >= 65 && c <= 90)
		return (1);
	return (0);
}

int is_lowercase(char c)
{
	if(c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	is_alpha_num(char c)
	{
		if(!((c >= 65 && c <= 90) || (c >= 97 && c <= 122 ) || 
		(c >= 48 && c <= 57)))
			return (0);
		return (1);
	}