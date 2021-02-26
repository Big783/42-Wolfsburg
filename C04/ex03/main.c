#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main()
{
	char str [] = "---+---+1234ab567";
	printf("ft_atoi: %d \n", ft_atoi(str));
	printf("atoi : %d \n", atoi(str));
	return (0);
}