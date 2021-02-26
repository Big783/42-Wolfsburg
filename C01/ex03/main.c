#include <stdio.h>

void	ft_div_mod(int a , int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int a = 10;
	int b = 3;

	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("%i, %d \n", a, b);
	return (0);
}