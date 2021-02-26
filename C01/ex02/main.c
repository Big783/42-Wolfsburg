#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}	
int main()
{
	int x = 1;
	int y = 2;

	int *a = &x;
	int *b = &y;

	printf ("x: %d, y: %d\n", x, y);
	ft_swap(a, b);
	printf ("x: %d, y: %d\n", x, y);
	return (0);
}