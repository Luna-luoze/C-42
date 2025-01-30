#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "fdagae6AMYrtreajAMYgdkln vjk nz";
	char find[] = " vj";

	printf("%p\n", ft_strstr(str, find));
	printf("%s\n", ft_strstr(str, find));
}