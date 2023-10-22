#include <stdio.h>

int main()
{
	const int i=5;
	int a=4;
	int b=9;
	i=a+b;
	printf("so i la: %d", i);
	//xuat hien loi "assignment of read-only variable 'i'
	//xuat hien loi nay vi i la hang so
}
