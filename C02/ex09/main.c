#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char str1 [] = "hi aFRida nicE tRy";
	printf("%s \n", str1);
	printf("%s \n", ft_strcapitalize(str1));
	return (0);
}