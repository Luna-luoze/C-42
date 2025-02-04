#include <stdio.h>
int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d\n",  ft_is_prime( -1 ) ); //0
	printf("%d\n",  ft_is_prime( 2 ) ); //1
	printf("%d\n",  ft_is_prime( 3 ) ); //1
	printf("%d\n",  ft_is_prime( 8 ) ); //0
	printf("%d\n",  ft_is_prime( 23 ) ); //1
	printf("%d\n",  ft_is_prime( 197 ) ); //1

	return (0);
}
