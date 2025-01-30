#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);


int main(void)
{
	char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	unsigned int size = 61;
	char dest[61];
	
	// ft_strupcase(a);
	printf("%d\n",ft_strlcpy(dest, src, size));
	printf("%s\n",dest);
	return (0);
}