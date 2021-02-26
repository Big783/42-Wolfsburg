#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	const char scr1 [] = "sufi hi";
	char dest1 [] = "Afrida";

	char scr [] = "sufi hi";
	char dest [] = "Afrida";

	size_t nb = 15;
	printf("str: %s \n", strncat(dest1, scr1, nb));
	printf("str: %s \n", ft_strncat(dest, scr, nb));
	return(0);
}