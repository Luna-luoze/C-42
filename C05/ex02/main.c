#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(0 , 0));  //1
	printf("%d\n", ft_iterative_power(-2, 0));  //1
	printf("%d\n", ft_iterative_power(-2, 2));  //4
	printf("%d\n", ft_iterative_power(2, -7));  //0
	printf("%d\n", ft_iterative_power(2, 8));   //256
	printf("%d\n", ft_iterative_power(-2, 8));  //256
	return (0);
}
