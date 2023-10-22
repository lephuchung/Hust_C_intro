#include <stdio.h>

int main()
{
	int a;//a kieu int 
	char *x;//pointer kieu char
	x = (char *)&a;//ep kieu a ve char //dung x tro ve char 
	a = 512;//=2^9
	//int 32 bit: 31 30 ... 24 | 23 22 ... 16 | 15 14 ... 8 | 7 6 ... 0
	//				x[3]			x[2]			x[1]		x[0]
	//xep nguoc vi la little endian
	x[0] = 1; // 0 0 0 0 0 0 0 1 = 2^0
	x[1] = 2; // 0 0 0 0 0 0 1 0 = 2^9
	x[2] = 2; // 0 0 0 0 0 0 1 0 = 2^17
	//a= 2^0 + 2^9 +2^17
	printf("%d\n",a);
	return 0;
}
