#include <stdio.h>
#include <string.h>
char	*ft_strupcase(char *str);

int main(void)
{
	char a[] = "a s .;' I am a fool";
	
	// ft_strupcase(a);
	printf("%s\n",ft_strupcase(a));
	return (0);
}