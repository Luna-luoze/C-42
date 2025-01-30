#include <stdio.h>
#include <string.h>
char	*ft_strcapitalize(char *str);

int main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[] = "a  salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	// ft_strupcase(a);
	printf("%s\n",ft_strcapitalize(a));
	printf("%s\n",ft_strcapitalize(b));
	return (0);
}