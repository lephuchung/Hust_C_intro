#include <stdio.h>

int main()
{
	printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
	printf("%-10s%-10d%-10c%-10f\n\n", "hello", 7, 'a', 1.23);
}
