#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main()
{
	char str_ory [] = "hi Afrida";
	printf("%s \n", str_ory);
	printf("%s \n", ft_strupcase(str_ory));
	return (0);
}