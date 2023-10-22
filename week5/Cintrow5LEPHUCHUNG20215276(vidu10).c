#include <stdio.h>

int main()
{
	//thuc hien phep toan tren bit
	int a=10&15;
	int b=10|15;
	int c=10^15;
	int d=~10;
	printf("%8d\n",a);
	printf("%8d\n",b);
	printf("%8d\n",c);
	printf("%8d\n",d);
}
