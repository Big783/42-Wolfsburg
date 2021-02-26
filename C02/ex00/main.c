#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char src [] = "hello afrida";
	char dest [] = {};
	ft_strcpy(dest, src);
	printf("%s \n", dest);
}