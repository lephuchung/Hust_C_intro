#include <stdio.h>

int main()
{
	char z[9];
	printf("Enter string: ");
	scanf("%[aieou]", z);
	printf("The input was \"%s\"\n", z);
}
