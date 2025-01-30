#include <stdio.h>
#include <string.h>
int	ft_str_is_printable(char *str);

int main(void)
{
	char a[] = "AS\n";
	
	
	printf("%d",ft_str_is_printable(a));
	return (0);
}