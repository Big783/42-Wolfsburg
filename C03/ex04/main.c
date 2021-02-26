#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char str [12] = "afrida sufi";
	char to_find [5] = "sufi";

	printf("str: %s and %s\n", str, to_find);
	printf("str: %s \n", strstr(str, to_find));
	printf("str: %s \n", ft_strstr(str, to_find));
	return(0);
}