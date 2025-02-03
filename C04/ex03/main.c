#include <stdio.h>

int	ft_atoi(char *str);
//write a main that take input in run time
//use argc and argv
int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", argc);	
	return (0);
}

//   ./a.out " ---+--+1234ab567"
//    