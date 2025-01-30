#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[] = "fdagae6AMYrtreajAMYgdkln vjk nz";
	char src[] = "AMY";

	printf("%s\n", ft_strncat(dest, src, 3));
	// printf("%s\n", ft_strstr(str, find));
}