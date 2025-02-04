#include <stdio.h>
int	ft_fibonacci(int index);

int	main(void)
{
	printf("%d\n",  ft_fibonacci( -1   ) ); //-1
	printf("%d\n",  ft_fibonacci(  0  ) ); //0
	printf("%d\n",  ft_fibonacci( 1   ) ); //1
	printf("%d\n",  ft_fibonacci(  2 ) ); //1
	printf("%d\n",  ft_fibonacci( 28   ) ); //317811
	printf("%d\n",  ft_fibonacci( 34   ) ); //5702887

	return (0);
}
