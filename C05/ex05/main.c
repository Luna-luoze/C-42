#include <stdio.h>
int	ft_sqrt(int nb);

int	main(void)
{
	printf("%d\n",  ft_sqrt( -1 ) ); //-1
	printf("%d\n",  ft_sqrt( 0 ) ); //0
	printf("%d\n",  ft_sqrt( 1 ) ); //1
	printf("%d\n",  ft_sqrt( 2 ) ); //1
	printf("%d\n",  ft_sqrt( 3 ) ); //317811
	printf("%d\n",  ft_sqrt( 4 ) ); //5702887

	return (0);
}
