#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int div;
	int mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;

}
int main()
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%i, %d \n", a, b);
	return(0);
}