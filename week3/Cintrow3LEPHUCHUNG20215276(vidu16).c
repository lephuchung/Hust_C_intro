#include <stdio.h>

int main()
{
	printf("%6d\n", 42);
	printf("%-6d\n", 42);
	printf("%3c\n", 'z');
	printf("%-3c\n", 'z');
	printf("%10f\n", 2.71828);
	printf("%10.2f\n", 2.71828);
	printf("%-10.2f\n", 2.71828);
	printf("%.4f\n", 2.718);
	printf("%10e\n", 2.71828);
	printf("%s\n", "printf");
	printf("%10s\n", "printf");
}
