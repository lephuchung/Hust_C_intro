#include <stdio.h>

int main()
{
	char z[9]={'\0'};
	printf("Enter a string: ");
	scanf("%[^aeuoi]", z);
	printf("The input was \"%s\"\n", z);
}
