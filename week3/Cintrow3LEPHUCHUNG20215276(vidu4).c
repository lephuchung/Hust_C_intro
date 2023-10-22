#include <stdio.h>

int main()
{
	int *ptr;
	int x = 12345, y;
	ptr = &x;
	printf("The value of ptr is %p\n", ptr);
	printf("The address of x is %p\n", &x);
	printf("Total character printed on this line is: %n",&y);
	printf("%d\n\n", y);
	y = printf("This line has 28 characters\n");
	printf("%d character  were  printed \n", y);
	printf("Printing a%% in a format control string\n");
	return 0;
}
