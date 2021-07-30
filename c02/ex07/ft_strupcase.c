char *ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while(str[counter] != '\0')
	{
		if(str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] -= 32;
		counter++;
	}
	return (str);
}
#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	return (0);
}