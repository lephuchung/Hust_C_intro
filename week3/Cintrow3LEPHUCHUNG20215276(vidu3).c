#include <stdio.h>

int main()
{
	char character = 'A';
	char string[] = "this is a string";
	const char *stringPtr = "this is also a string";
	
	printf("%c\n", character);
	printf("%s\n", "this is a string");
	printf("%s\n", string);
	printf("%s\n", stringPtr);
	
}
