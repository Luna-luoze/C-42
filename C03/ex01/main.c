#include <stdio.h>
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "hey ";
	char s2[] = "hey";

	printf("%d\n", ft_strcmp(s1, s2));
}