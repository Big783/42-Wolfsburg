#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int main()
{
	char str [] = "\x19";
	printf("%d \n", ft_str_is_printable(str));
	return (0);
}
