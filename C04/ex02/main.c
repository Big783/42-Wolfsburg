#include <unistd.h>

void	ft_putnbr(int nb);

int main(void)
{
	int number = -2147483648;
	ft_putnbr(number);
	return(0);
}