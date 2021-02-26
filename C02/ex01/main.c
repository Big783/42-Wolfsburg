#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src [] = "hello afrida";
	char dest [] = {};
	ft_strncpy(dest, src, 10);
	printf("%s \n", dest);
}