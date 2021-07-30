#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);
void    test(char *str, unsigned int n);

int    main()
{
    test("Save the C programming jobs for me!", 34);
    test("Save the C programming jobs for me!", 35);
    test("Save the C programming jobs for me!", 36);
}

void    test(char *str, unsigned int n)
{
    char dest[] = "Hello! My name is Gabriel, what about yours?";

    printf("Testing\n");
    printf("    src  = %s\n", str);
    ft_strncpy(dest, str, n);
    printf("    dest = %s\n", dest);
}