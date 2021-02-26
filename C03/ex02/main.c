#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char src1 [] = "sufi";
	char dest1 [] = "afrida";

	char src [] = "sufi";
	char dest [10] = "afrida";
	printf("str: %s %s\n", dest1, src1);
	printf("str: %s \n", strcat(dest, src));
	printf("str: %s \n", ft_strcat(dest, src));
	return(0);
}