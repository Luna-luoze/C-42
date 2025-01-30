#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest1[] = "7777777777777777777777777777777777777777777777";
	char src1[] = "Mount Hakone is the steepest in the realm!";
	
	printf("dest (1) is %p\n", dest1);

	char *temp = ft_strcpy(dest1, src1);
	printf(" (2) dest is %p, which is not being changed after all. so no worries.\n", dest1);

	printf("The ++ value is changed after all: %p\n\n", temp);

//using strcpy():
	char dest2[] = "7777777777777777777777777777777777777777777777";
	char src2[] = "Mount Hakone is the steepest in the realm!";
	
	printf("the original address is %p\n", dest2);

	
	printf("The returned address is %p\n", strcpy(dest2, src2));
	printf("Now the address is %p\n", dest2);
	
	printf("The dest string is %s\n", dest2);
	// printf("Now the address is %p\n", dest2);
	return (0);
}