#include <unistd.h>

void	ft_putnbr(int nb);

int	main()
{
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	ft_putnbr(234567);
	ft_putnbr(0);
	ft_putnbr(-789);
	ft_putnbr(42);
	// write(1, "a", 1);
	// write(1, "\n", 1);
	return (0);
}