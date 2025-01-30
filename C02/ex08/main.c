#include <stdio.h>
#include <string.h>
char	*ft_strlowcase(char *str);

int main(void)
{
	char a[] = "a AAAADF .;' I am DDFa fool";

	// ft_strupcase(a);
	printf("%s\n",ft_strlowcase(a));
	return (0);
}