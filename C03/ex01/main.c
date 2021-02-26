#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1 [] = "Hallo";
	char s2 [] = "Hello";
	size_t n = 15;
	printf("%d \n", ft_strncmp(s1, s2, n));
	return(0);
}