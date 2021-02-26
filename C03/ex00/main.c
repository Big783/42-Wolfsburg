#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char s1 [] = "Hallo";
	char s2 [] = "Hello";
	printf("%d \n", ft_strcmp(s1, s2));
	return(0);
}