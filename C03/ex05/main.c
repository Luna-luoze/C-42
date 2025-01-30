#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[400] = "I am ";
	char src[] = "Amy";

	printf("%d\n", ft_strlcat(dest, src, 400));
	printf("%s\n",dest);
}